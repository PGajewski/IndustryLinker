#ifndef BOOLEANVARIABLE_H
#define BOOLEANVARIABLE_H

#include "variable.h"

/**
 * @brief The BooleanVariable class
 */
class BooleanVariable : public Variable
{
public:
    /**
     * @brief BooleanVariable basic constructor
     */
    BooleanVariable() : value(false){}

    /**
     * @brief BooleanVariable copy constructor
     */
    BooleanVariable(const BooleanVariable&) = default;

    //Modbus interface
    /**
     * @brief getModbusValue
     * @param attr
     * @return
     */
    bool getModbusValue(const std::shared_ptr<VariableAttributes> attr);

    /**
     * @brief setModbusValue
     * @param attr
     * @return
     */
    bool setModbusValue(const std::shared_ptr<VariableAttributes> attr);

    /**
     * @brief isOnModbusServer
     * @param attr
     * @return
     */
    bool isOnModbusServer(const std::shared_ptr<VariableAttributes> attr);

    //OPC UA interface
    /**
     * @brief getOPCUAValue
     * @param attr
     * @return
     */
    bool getOPCUAValue(const std::shared_ptr<VariableAttributes> attr);

    /**
     * @brief setOPCUAValue
     * @param attr
     * @return
     */
    bool setOPCUAValue(const std::shared_ptr<VariableAttributes> attr);

    /**
     * @brief isOnOPCUAServer
     * @param attr
     * @return
     */
    bool isOnOPCUAServer(const std::shared_ptr<VariableAttributes> attr);

    //Database interface
    /**
     * @brief getDatabaseValue
     * @param attr
     * @return
     */
    bool getDatabaseValue(const std::shared_ptr<VariableAttributes> attr);

    /**
     * @brief setDatabaseValue
     * @param attr
     * @return
     */
    bool setDatabaseValue(const std::shared_ptr<VariableAttributes> attr);

    /**
     * @brief isOnDatabaseServer
     * @param attr
     * @return
     */
    bool isOnDatabaseServer(const std::shared_ptr<VariableAttributes> attr);

    /**
     * @brief setValue
     * @param value
     */
    inline void setValue(const bool value)
    {
        this->value = value;
    }

    /**
     * @brief getValue
     * @return
     */
    inline bool getValue() const
    {
        return this->value;
    }

private:
    bool value;
};

#endif // BOOLEANVARIABLE_H
