#ifndef DATABASEVARATTR_H
#define DATABASEVARATTR_H

#include "../Variables/variableattributes.h"

class DatabaseVarAttr : public VariableAttributes
{
public:

    /**
     * @brief DatabaseVarAttr basic constructor
     */
    DatabaseVarAttr() : table(""), column(""){}

    /**
     * @brief DatabaseVarAttr copy constructor
     */
    DatabaseVarAttr(const DatabaseVarAttr&) = default;
    //Getter
    /**
     * @brief getTable
     * @return
     */
    inline std::string getTable() const
    {
        return this->table;
    }

    /**
     * @brief getColumn
     * @return
     */
    inline std::string getColumn() const
    {
        return this->column;
    }

    //Setter
    /**
     * @brief setTable
     * @param table
     */
    inline void setTable(const std::string table)
    {
        this->table = table;
    }

    /**
     * @brief getColumn
     * @param column
     */
    inline void setColumn(const std::string column)
    {
        this->column = column;
    }

    inline void initAttributes()
    {
        table = "";
        column = "";
    }

    //Serialize
    friend class cereal::access;

    template<class Archive>
    void serialize( Archive & ar )
    { ar( table, column ); }

private:
    /**
     * @brief table
     */
    std::string table;

    /**
     * @brief column
     */
    std::string column;
};


CEREAL_REGISTER_TYPE(DatabaseVarAttr);
CEREAL_REGISTER_POLYMORPHIC_RELATION(VariableAttributes, DatabaseVarAttr);

#endif // DATABASEVARATTR_H
