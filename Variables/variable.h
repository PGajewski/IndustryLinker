#ifndef VARIABLE_H
#define VARIABLE_H

#include <string>
#include <memory>

#include "Variables/variableattributes.h"

class Variable
{
public:
    /**
     * @brief Variable basic constructor
     */
    Variable();

    /**
     * @brief Variable copy constructor
     */
    Variable(const Variable&) = default;

    //Modbus interface
    /**
     * @brief getModbusValue
     * @param attr
     * @return
     */
    virtual bool getModbusValue(const std::shared_ptr<VariableAttributes> attr) = 0;

    /**
     * @brief setModbusValue
     * @param attr
     * @return
     */
    virtual bool setModbusValue(const std::shared_ptr<VariableAttributes> attr) = 0;

    /**
     * @brief isOnModbusServer
     * @param attr
     * @return
     */
    virtual bool isOnModbusServer(const std::shared_ptr<VariableAttributes> attr) = 0;

    //OPC UA interface
    /**
     * @brief getOPCUAValue
     * @param attr
     * @return
     */
    virtual bool getOPCUAValue(const std::shared_ptr<VariableAttributes> attr) = 0;

    /**
     * @brief setOPCUAValue
     * @param attr
     * @return
     */
    virtual bool setOPCUAValue(const std::shared_ptr<VariableAttributes> attr) = 0;

    /**
     * @brief isOnOPCUAServer
     * @param attr
     * @return
     */
    virtual bool isOnOPCUAServer(const std::shared_ptr<VariableAttributes> attr) = 0;

    //Database interface
    /**
     * @brief getDatabaseValue
     * @param attr
     * @return
     */
    virtual bool getDatabaseValue(const std::shared_ptr<VariableAttributes> attr) = 0;

    /**
     * @brief setDatabaseValue
     * @param attr
     * @return
     */
    virtual bool setDatabaseValue(const std::shared_ptr<VariableAttributes> attr) = 0;

    /**
     * @brief isOnDatabaseServer
     * @param attr
     * @return
     */
    virtual bool isOnDatabaseServer(const std::shared_ptr<VariableAttributes> attr) = 0;
};

#endif // VARIABLE_H
