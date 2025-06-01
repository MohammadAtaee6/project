#pragma once
#include <iostream>
using namespace std;

#include <fstream>

class SessionBase
{
private:
    time_t created_at, lastTimeLogin;
    bool sessionStatus;

public:
    virtual ~SessionBase() = default;  // Important for polymorphism
    virtual void load_session() = 0;

    virtual void save_session() = 0;

    virtual bool login(string, string, string);

    virtual void logout();

    //setters
    void setCreatedAt(time_t c)
    {
        created_at = c;
    }

    void setLastTimeLogin(time_t c)
    {
        lastTimeLogin = c;
    }

    void setSessionStatus(bool s)
    {
        sessionStatus = s;
    }

    //getters
    time_t getCreatedAt()
    {

        return created_at;
    }

    time_t getLastTimeLogin()
    {

        return lastTimeLogin;
    }

    bool getSessionStatus()
    {

        return sessionStatus;
    }
};
