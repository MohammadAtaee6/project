#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
#include "SessionBase.h"
#include "Student.h"

using json = nlohmann::json;

using namespace std;

namespace AdminSesstion{
    class AdminSesstion:public SessionBase
    {
    //private:

    };
}


namespace StudentSession{
    class StudentSession:public SessionBase
    {
    private:
        Student currentStudent;
    public:
        // check if the users has signed in before or not
        void load_session() :override{

        }

        // login user and save his data
        void save_session(string name, string lastName, string pass) :override{
            ofstream file("Data/user_session.json");

            json student;
            student["student_id"] = currentStudent.getStudentId();
            student["id"] = currentStudent.getUserId();

            if (file.is_open()) {
                file << setw(4) << student_data << endl;
            } else {
                cerr << "Error: Could not open file for writing" << endl;
                return 1;
            }

        }

        //login user
        bool login(string n, string password)
        {
            //check if the user exist or not
            ifstream file("Data/users.json");
            json data = json::parse(file);

            Student newStudent;

            bool isLogined = false;

            // search for the users
            for(const auto& user : data)
            {

                // if the user data was right, save the user
                if(user["name"] == n && password["password"] == password)
                {
                    isLogined = true;

                    newStudent.setStudentId(user["student_id"]);
                    newStudent.setName(user["name"]);
                    newStudent.setlastName(user["last_name"]);
                    newStudent.setBalance(user["balance"]);
                    newStudent.setActive(user["active"]);
                    newStudent.setEmail(user["email"]);
                    newStudent.sethashedPassword(user["password"]);
                    newStudent.setPhone(user["phone"]);
                    newStudent.setUserId(user["id"]);

                    currentStudent = Student;
                }
            }

            file.close();
            //if the user logined successfully save the user in session
            if(isLogined)
            {
                save_session();
                return true;
            }

            // if the user was not logined, return false
            return false;

        }
    };
}
