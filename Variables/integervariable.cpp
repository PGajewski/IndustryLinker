#include "integervariable.h"

//Modbus interface

bool IntegerVariable::getModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool IntegerVariable::setModbusValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool IntegerVariable::isOnModbusServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

//OPC UA interface

bool IntegerVariable::getOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool IntegerVariable::setOPCUAValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool IntegerVariable::isOnOPCUAServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool IntegerVariable::getDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}


bool IntegerVariable::setDatabaseValue(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}

bool IntegerVariable::isOnDatabaseServer(const std::shared_ptr<VariableAttributes> attr)
{
    return false;
}
