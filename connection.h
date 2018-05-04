#ifndef CONNECTION_H
#define CONNECTION_H

#include <boost/thread.hpp>
#include <boost/chrono.hpp>

#include <cereal/types/polymorphic.hpp>
#include <cereal/types/vector.hpp>

#include <vector>
#include <memory>
#include "connectionclient.h"

typedef std::vector<std::shared_ptr<ConnectionClient>>::iterator connection_iterator;


class Connection
{
public:

    /**
     * @brief Connection basic constructor
     */
    Connection();

    /**
      * @brief Connection copy constructor
      */
    Connection(const Connection&) = default;

    Connection(Connection&&) = default;

    Connection& operator=(const Connection& other) = default;

    Connection& operator=(Connection&& other) = default;


    //Getters
    inline std::shared_ptr<ConnectionClient> getSource() const
    {
        return this->source;
    }

    inline connection_iterator getBeginDestination()
    {
        return this->destinations.begin();
    }

    inline connection_iterator getEndingDestination()
    {
        return this->destinations.end();
    }

    //Runnable function.

    void runSync();

    void runSyncIfCorrect();

    void runAsync();

    void runAsyncIfCorrect();

    //Setters
    inline void setSource(const std::shared_ptr<ConnectionClient> client)
    {
        this->source = client;
    }

    inline void setDestinations(std::vector<std::shared_ptr<ConnectionClient>> destinations)
    {
        this->destinations.swap(destinations);
    }

    //Serialization
    friend class cereal::access;

    template<class Archive>
    void serialize( Archive & ar )
    { ar( source, CEREAL_NVP(destinations), variable); }

private:
    boost::thread connection_thread;
    std::shared_ptr<ConnectionClient> source;
    std::vector<std::shared_ptr<ConnectionClient>> destinations;
    std::shared_ptr<Variable> variable;
};

#endif // CONNECTION_H
