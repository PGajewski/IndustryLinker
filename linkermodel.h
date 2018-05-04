#ifndef LINKERMODEL_H
#define LINKERMODEL_H

#include "connection.h"
#include "connectionclient.h"
#include <vector>

class LinkerModel
{
public:
    LinkerModel();
    LinkerModel(const LinkerModel&) = delete;

    void runConnection(int position, bool isAsync, bool onlyCorrect);

    inline void addConnection(Connection connection)
    {
        this->connections.push_back(std::move(connection));
    }

    inline void removeConnection(int position)
    {
        this->connections.erase(connections.begin() + position);
    }

    inline void getConnection(int position)
    {
        this->connections[position];
    }

private:
    std::vector<Connection> connections;
    std::vector<ConnectionClient> clients;

};

#endif // LINKERMODEL_H
