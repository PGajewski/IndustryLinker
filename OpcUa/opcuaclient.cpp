#include "opcuaclient.h"

OPCUAClient::OPCUAClient()
{

}

bool OPCUAClient::connect()
{
    return false;
}

bool OPCUAClient::disconnect()
{
    return false;
}


bool OPCUAClient::isVariableExist(std::shared_ptr<Variable> variable)
{
    return false;
}

bool OPCUAClient::setVariable(std::shared_ptr<Variable> variable)
{
    return false;
}

bool OPCUAClient::isVariableChange()
{
    return false;
}

bool OPCUAClient::getVariable(std::shared_ptr<Variable> variable)
{
    return false;
}
