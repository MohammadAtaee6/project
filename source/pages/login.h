#include<iostream>
#include "../Panel.h"
#include "../SessionManager.h"
using namespace StudentSession;

using namespace std;

void Panel::login()
{
    StudentSession stu;
    string name;
    string password;

    cout << "enter your name : " << endl;
    getline(cin, name);
    cin.ignore();
    cout << "enter the password : " << endl;
    getline(cin, password);


    if(stu.login(name, password))
    {
        cout << "logined";
    }else {
        cout << "data not found";
    }
}
