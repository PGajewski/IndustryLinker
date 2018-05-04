#include "databaseclient.h"

DatabaseClient::DatabaseClient()
{

}

bool DatabaseClient::connect()
{
    return false;
}

bool DatabaseClient::disconnect()
{
    return false;
}


bool DatabaseClient::isVariableExist(std::shared_ptr<Variable> variable)
{
    return false;
}

bool DatabaseClient::setVariable(std::shared_ptr<Variable> variable)
{
    return false;
}

bool DatabaseClient::isVariableChange()
{
    return false;
}

bool DatabaseClient::getVariable(std::shared_ptr<Variable> variable)
{
    return false;
}
