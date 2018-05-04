#include "booleanvariable.h"
#include "variable.h"

//Modbus interface

bool BooleanVariable::getModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool BooleanVariable::setModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool BooleanVariable::isOnModbusServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

//OPC UA interface

bool BooleanVariable::getOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool BooleanVariable::setOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool BooleanVariable::isOnOPCUAServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool BooleanVariable::getDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool BooleanVariable::setDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool BooleanVariable::isOnDatabaseServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}
