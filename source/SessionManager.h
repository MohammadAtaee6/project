#include <iostream>
#include "../json.hpp"
#include <fstream>
#include "SessionBase.h"
#include "Student.h"
#pragma once

using json = nlohmann::json;

using namespace std;

namespace AdminSesstion{
    class AdminSesstion:public SessionBase
    {
    //private:

    };
}


namespace StudentSessionNS {
    class StudentSession:public SessionBase
    {
    private:
        Student currentStudent;
    public:
        // check if the users has signed in before or not
        void load_session() override{

        }

        // login user and save his data
        void save_session() override{
            ofstream file("Data/user_session.json");

            json student;
            student["student_id"] = currentStudent.getStudentId();
            student["id"] = currentStudent.getUserId();

            if (file.is_open()) {
                file << setw(4) << student << endl;
            } else {
                cerr << "Error: Could not open file for writing" << endl;
            }

        }

        //login user
        bool login(string n, string password) {
            ifstream file("Data/users.json");
            if (!file.is_open()) {
                cerr << "Error opening users file" << endl;
                return false;
            }

            json data;
            try {
                data = json::parse(file);
            } catch (const exception& e) {
                cerr << "JSON parse error: " << e.what() << endl;
                return false;
            }

            for (const auto& user : data) {
                if (user["name"] == n && user["password"] == password) {
                    currentStudent.setStudentId(user["student_id"]);
                    currentStudent.setName(user["name"]);
                    // ... set other fields
                    save_session();
                    return true;
                }
            }
            return false;
        }
    };
}
