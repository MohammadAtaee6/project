#include <iostream>

using namespace std;

class user
{
private:
    string name,lastName,hashedPassword;
    int userId;

public:
    virtual void print():const;
    virtual void gettype();

//setters:
void setName(string n)
{
    name=n;
}
void setlastName(string l)
{
    lastName=l;
}
void sethashedPassword(string h)
{
    hashedPassword=h;
}
void setUserId(int u)
{
    userId=u;
}

//getters:
string getName()
{
    return name;
}
string getlastName()
{
    return lastName;
}
string gethashedPassword()
{
    return hashedPassword;
}
int getUserId()
{
    return userId;
}
};
