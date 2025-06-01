#pragma once
#include <iostream>

using namespace std;
class DiningHall
{
  private:
      int hallId, capacity;
      string name, address;
  public:
//setters:
    void setHallId(int h)
    {
        hallId=h;
    }
    void setCapacity(int h)
    {
        capacity=h;
    }
    void setName(string n)
    {
        name= n;
    }
     void setAddress(string n)
    {
        address= n;
    }

//getters:

    int getHallId()
    {
        return hallId;
    }
    int getCapacity()
    {
        return capacity;
    }
    string getName()
    {
        return name;
    }
    string getAddress()
    {
        return address;
    }

};
