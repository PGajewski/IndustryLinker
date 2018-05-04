#include "modbusclient.h"

ModbusClient::ModbusClient()
{

}

bool ModbusClient::connect()
{
    return false;
}

bool ModbusClient::disconnect()
{
    return false;
}


bool ModbusClient::isVariableExist(std::shared_ptr<Variable> variable)
{
    return false;
}

bool ModbusClient::setVariable(std::shared_ptr<Variable> variable)
{
    return false;
}

bool ModbusClient::isVariableChange()
{
    return false;
}

bool ModbusClient::getVariable(std::shared_ptr<Variable> variable)
{
    return false;
}
