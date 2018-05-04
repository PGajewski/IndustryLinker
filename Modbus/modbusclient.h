#ifndef MODBUSCLIENT_H
#define MODBUSCLIENT_H
#include <string>

#include "../connectionclient.h"
#include "modbusvarattr.h"
#include "../Variables/linker_variables.h"


/**
 * @brief The ModbusClient class
 */
class ModbusClient : public ConnectionClient
{
public:
    /**
     * @brief ModbusClient basic constructor
     */
    ModbusClient();

    /**
      * @brief ModbusClient copy constructor
      */
    ModbusClient(const ModbusClient&) = default;

    /**
     * @brief getHost
     * @return
     */
    inline std::string getHost()
    {
        return this->host;
    }

    inline void setHost(std::string host)
    {
        this->host = host;
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
    { ar( host ); }

private:
    /**
     * @brief host
     */
    std::string host;
};

CEREAL_REGISTER_TYPE(ModbusClient);
CEREAL_REGISTER_POLYMORPHIC_RELATION(ConnectionClient, ModbusClient);

#endif // MODBUSCLIENT_H
