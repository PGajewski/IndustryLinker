#ifndef DATABASECLIENT_H
#define DATABASECLIENT_H

#include "../connectionclient.h"
#include "databasevarattr.h"
#include "soci.h"

#include "../Variables/linker_variables.h"

class DatabaseClient : public ConnectionClient
{
public:
    DatabaseClient();
    DatabaseClient(const DatabaseClient&) = default;

    //Getters
    /**
     * @brief getHost
     * @return
     */
    inline std::string getHost() const
    {
        return this->host;
    }

    /**
     * @brief getDatabase
     * @return
     */
    inline std::string getDatabase() const
    {
        return this->database;
    }

    /**
     * @brief getUser
     * @return
     */
    inline std::string getUser() const
    {
        return this->user;
    }

    /**
     * @brief getPassword
     * @return
     */
    inline std::string getPassword() const
    {
        return this->password;
    }

    //Setters
    /**
     * @brief setHost
     * @param host
     */
    inline void setHost(std::string const host)
    {
        this->host = host;
    }

    /**
     * @brief setDatabase
     * @param database
     */
    inline void setDatabase(std::string const database)
    {
        this->database = database;
    }

    /**
     * @brief setUser
     * @param user
     */
    inline void setUser(std::string const user)
    {
        this->user = user;
    }

    /**
     * @brief setPassword
     * @param password
     */
    inline void setPassword(std::string const password)
    {
        this->password = password;
    }


    /**
     * @brief connect
     * @return
     */
    bool connect();

    /**
     * @brief disconnect
     * @return
     */
    bool disconnect();

    /**
     * @brief isVariableExist
     * @param variable
     * @return
     */
    bool isVariableExist(std::shared_ptr<Variable> variable);

    /**
     * @brief setVariable
     * @param variable
     * @return
     */
    bool setVariable(std::shared_ptr<Variable> variable);

    /**
     * @brief isVariableChange
     * @return
     */
    bool isVariableChange();

    /**
     * @brief getVariable
     * @param variable
     * @return
     */
    bool getVariable(std::shared_ptr<Variable> variable);

    //Serialize
    friend class cereal::access;

    template<class Archive>
    void serialize( Archive & ar )
    { ar( host, database, user, password ); }

private:

    /**
     * @brief host
     */
    std::string host;

    /**
     * @brief database
     */
    std::string database;

    /**
     * @brief user
     */
    std::string user;

    /**
     * @brief password
     */
    std::string password;
};

CEREAL_REGISTER_TYPE(DatabaseClient);
CEREAL_REGISTER_POLYMORPHIC_RELATION(ConnectionClient, DatabaseClient);

#endif // DATABASECLIENT_H
