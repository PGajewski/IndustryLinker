#ifndef VARIABLEATTRIBUTES_H
#define VARIABLEATTRIBUTES_H

#include <string>
#include <cereal/types/polymorphic.hpp>

class VariableAttributes
{
public:
    VariableAttributes();

    /**
     *
     */
    VariableAttributes(const VariableAttributes&) = default;

    /**
     * @brief initAttributes Generate default values for attributes
     */
    virtual void initAttributes() = 0;
};

#endif // VARIABLEATTRIBUTES_H
