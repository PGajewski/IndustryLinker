#include "floatvariable.h"

//Modbus interface

bool FloatVariable::getModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool FloatVariable::setModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool FloatVariable::isOnModbusServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

//OPC UA interface

bool FloatVariable::getOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool FloatVariable::setOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool FloatVariable::isOnOPCUAServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool FloatVariable::getDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}


bool FloatVariable::setDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool FloatVariable::isOnDatabaseServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

