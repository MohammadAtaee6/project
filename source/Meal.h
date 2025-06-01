#include <iostream>

using namespace std;
class  Meal
{
private:
    int mealId;
    string name;
    float price;

    public:
// setters:
    void setMealId(int id)
    {
        mealId = id;
    }

    void setName(const string& mealName)
    {
        name = mealName;
    }

    void setPrice(float mealPrice)
    {
        price = mealPrice;
    }

// getters:
    int getMealId() const
    {
        return mealId;
    }

    string getName() const
    {
        return name;
    }

    float getPrice() const
    {
        return price;
    }

    void print (){}
    void uppdatePrice(float newPrice){}
    void addSideItem(string item){}

};
