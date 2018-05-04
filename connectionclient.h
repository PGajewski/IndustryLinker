#ifndef CONNECTIONCLIENT_H
#define CONNECTIONCLIENT_H
#include <string>
#include <vector>
#include <mutex>
#include <memory>
#include <Variables/variableattributes.h>
#include <Variables/variable.h>

#include <cereal/types/polymorphic.hpp>
#include <cereal/types/vector.hpp>

//
#define BUFFER_SIZE 1

/**
 * @brief The ConnectionClient class
 */
class ConnectionClient
{
public:

    /**
     * @brief ConnectionClient basic constructor
     */
    ConnectionClient();

    /**
      * @brief ConnectionClient copy constructor
      */
    ConnectionClient(const ConnectionClient&) = default;

    //Getters
    /**
     * @brief getName
     * @return Unical of the connection
     */
    inline std::string getName() const
    {
        return this->clientName;
    }

    //Variable attributes
    /**
     * @brief addVariableAttr
     * @param attr
     */
    inline void addVariableAttr(std::shared_ptr<VariableAttributes> attr)
    {
        this->variableAttributes=attr;
    }

    /**
     * @brief removeVariableAttr
     */
    inline void removeVariableAttr()
    {
        this->variableAttributes = nullptr;
    }

    /**
     * @brief setName
     * @param Name of connection to set
     */
    inline void setName(const std::string name)
    {
        this->clientName = name;
    }

    void addToBuffer(std::shared_ptr<Variable> var);

    /**
     * @brief connect
     * @return
     */
    virtual bool connect() = 0;

    /**
     * @brief disconnect
     * @return
     */
    virtual bool disconnect() = 0;

    /**
     * @brief isVariableExist
     * @param variable
     * @return
     */
    virtual bool isVariableExist(std::shared_ptr<Variable> variable) = 0;

    /**
     * @brief setVariable
     * @param variable
     * @return
     */
    virtual bool setVariable(std::shared_ptr<Variable> variable) = 0;

    /**
     * @brief isVariableChange
     * @return
     */
    virtual bool isVariableChange() = 0;

    /**
     * @brief getVariable
     * @param variable
     * @return
     */
    virtual bool getVariable(std::shared_ptr<Variable> variable) = 0;

    //Serialization
    friend class cereal::access;

    template<class Archive>
    void serialize( Archive & ar )
    { ar( clientName, variableAttributes ); }

protected:

    /**
     * @brief clientName
     */
    std::string clientName;

    /**
     * @brief variableAttributes
     */
    std::shared_ptr<VariableAttributes> variableAttributes;

    /**
     * @brief variableBuffer
     */
    std::shared_ptr<Variable> variableBuffer[BUFFER_SIZE];

    /**
     * @brief bufferMutex
     */
    std::mutex bufferMutex;

    int bufferPosition;
};

CEREAL_REGISTER_TYPE(ConnectionClient);

#endif // CONNECTIONCLIENT_H
