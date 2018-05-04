#include "stringvariable.h"

//Modbus interface

bool StringVariable::getModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool StringVariable::setModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool StringVariable::isOnModbusServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

//OPC UA interface

bool StringVariable::getOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool StringVariable::setOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool StringVariable::isOnOPCUAServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool StringVariable::getDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}


bool StringVariable::setDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool StringVariable::isOnDatabaseServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

