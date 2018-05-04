#ifndef OPCUACLIENT_H
#define OPCUACLIENT_H

#include "../connectionclient.h"
#include "opcuavarattr.h"

#include "../Variables/linker_variables.h"


class OPCUAClient : public ConnectionClient
{
public:
    /**
     * @brief OPCUAClientbasic contructor
     */
    OPCUAClient();

    /**
      * @brief OPCUAClient copy constructor
      */
    OPCUAClient(const OPCUAClient&) = default;
    //Getters
    /**
     * @brief getEndpoint
     * @return
     */
    inline std::string getEndpoint() const
    {
        return this->endpoint;
    }

    /**
     * @brief getUser
     * @return
     */
    inline std::string getUser() const
    {
        return this->user;
    }

    /**
     * @brief getPassword
     * @return
     */
    inline std::string getPassword() const
    {
        return this->password;
    }

    //Setters
    /**
     * @brief setEndpoint
     * @param endpoint
     */
    inline void setEndpoint(std::string const endpoint)
    {
        this->endpoint = endpoint;
    }

    /**
     * @brief setUser
     * @param user
     */
    inline void setUser(std::string const user)
    {
        this->user = user;
    }

    /**
     * @brief setPassword
     * @param password
     */
    inline void setPassword(std::string const password)
    {
        this->password = password;
    }

    /**
     * @brief connect
     * @return
     */
    bool connect();

    /**
     * @brief disconnect
     * @return
     */
    bool disconnect();

    /**
     * @brief isVariableExist
     * @param variable
     * @return
     */
    bool isVariableExist(std::shared_ptr<Variable> variable);

    /**
     * @brief setVariable
     * @param variable
     * @return
     */
    bool setVariable(std::shared_ptr<Variable> variable);

    /**
     * @brief isVariableChange
     * @return
     */
    bool isVariableChange();

    /**
     * @brief getVariable
     * @param variable
     * @return
     */
    bool getVariable(std::shared_ptr<Variable> variable);

    //Serialize
    friend class cereal::access;

    template<class Archive>
    void serialize( Archive & ar )
    { ar( endpoint, user, password ); }

private:

    /**
     * @brief host
     */
    std::string endpoint;

    /**
     * @brief user
     */
    std::string user;

    /**
     * @brief password
     */
    std::string password;

};

CEREAL_REGISTER_TYPE(OPCUAClient);
CEREAL_REGISTER_POLYMORPHIC_RELATION(ConnectionClient, OPCUAClient);

#endif // OPCUACLIENT_H
