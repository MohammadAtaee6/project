#pragma once
#include <iostream>
#include "DiningHall.h"
#include "Meal.h"
#include "Student.h"
using namespace std;
class  Reservation
{
private:
    int reservationId;
    Student student;
    DiningHall dHall;
    Meal meal;
    time_t createdAt;
  public:
// setters:

    void setReservationId(int id)
    {
        reservationId = id;
    }

    void setDiningHall(const DiningHall& hall)
    {
        dHall = hall;
    }

    void setMeal(const Meal& m)
    {
        meal = m;
    }

    void setCreatedAt(time_t time)
    {
        createdAt = time;
    }

// getters:
    int getReservationId() const
    {
        return reservationId;
    }

    DiningHall getDiningHall() const
    {
        return dHall;
    }

    Meal getMeal() const
    {
        return meal;
    }

    time_t getCreatedAt() const
    {
        return createdAt;
    }

    void print(){}
};
