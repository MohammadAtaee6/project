#include <iostream>
#include "SessionManager.h"
using namespace StudentSessionNS;
using namespace std;

class Panel{
private:

public:
    void action(int pageNum)
    {
        if(pageNum == 0){
            login();
        }

    }
    void login();
};

void Panel::login()
{
    string name;
    string password;

    cout << "enter your name : " << endl;
    getline(cin, name);
    cin.ignore();
    cout << "enter the password : " << endl;
    getline(cin, password);

     StudentSession stu;

    if(stu.login(name, password))
    {
        cout << "logined";
    }else {
        cout << "data not found";
    }
}
