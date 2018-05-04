#include "linkermodel.h"

#include "connection.h"

LinkerModel::LinkerModel()
{

}

void LinkerModel::runConnection(int position, bool isAsync, bool onlyCorrect)
{
    if(onlyCorrect)
    {
        if(isAsync)
        {
            connections[position].runAsyncIfCorrect();
        }
        else
        {
            connections[position].runSyncIfCorrect();
        }
    }
    else
    {
        if(isAsync)
        {
            connections[position].runAsync();
        }
        else
        {
            connections[position].runSync();
        }
    }
}
