#include "connectionclient.h"

ConnectionClient::ConnectionClient()
{
    bufferPosition = 0;
}

void ConnectionClient::addToBuffer(std::shared_ptr<Variable> var)
{
    std::lock_guard<std::mutex> guard(this->bufferMutex);
    bufferPosition = (bufferPosition+1)%BUFFER_SIZE;
    variableBuffer[bufferPosition] = var;
}
