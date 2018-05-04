#ifndef LINKERCONTROLLER_H
#define LINKERCONTROLLER_H

#include "linkermodel.h"
#include "linkerview.h"
#include <string>

#include <cereal/cereal.hpp>
#include <cereal/types/polymorphic.hpp>

class LinkerController
{
public:
    LinkerController();

    void save(std::string path);

    void load(std::string path);

private:
    void run(bool isAsync, bool onlyCorrect)
    {

    }
};

#endif // LINKERCONTROLLER_H
