#pragma once
#include <iostream>
#include "user.h"
#include <vector>
#include "Reservation.h"

using namespace std;
class Student:public user
{
private:
    string studentId, email, phone;
    float balance;
    bool isActive;
    vector <Reservation> reserve;

public:
// setters:

    void setStudentId(const string& id)
    {
        studentId = id;
    }

    void setEmail(const string& newEmail)
    {
        email = newEmail;
    }

    void setPhone(const string& newPhone)
    {
        phone = newPhone;
    }

    void setBalance(float newBalance)
    {
        balance = newBalance;
    }

    void activate()
    {
        isActive = true;
    }

    void deactivate()
    {
        isActive = false;
    }

// getters
    string getStudentId() const
    {
        return studentId;
    }

    string getEmail() const
    {
        return email;
    }

    string getPhone() const
    {
        return phone;
    }

    float getBalance() const
    {
        return balance;
    }

    bool setActive() const
    {
        return isActive;
    }

    // Methods for managing reservations
    void addReservation(const Reservation& newReservation)
    {
        reserve.push_back(newReservation);
    }

    void cancelReservation(int reservationIndex)
    {
        if (reservationIndex >= 0 && reservationIndex < reserve.size()) {
            reserve.erase(reserve.begin() + reservationIndex);
        }
    }

    const vector<Reservation>& getReservations() const
    {
        return reserve;
    }








};
