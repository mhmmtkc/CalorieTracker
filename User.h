#if !defined(_USER_H)
#define _USER_H
#include <string>
#include <iostream>
#include "Sports.h"
#include "Meals.h"
using namespace std;

class user
{
private:
    string name;
    string surname;
    int id;
    int age;
    float weight;
    float height;
    int totalCalories;
    int burnedCalories;
    Breakfast breakfast[7];
    Lunch lunch[7];
    Dinner dinner[7];
    Basketball basketball[7];
    Swimming swimming[7];
    Tennis tennis[7];
    Football football[7];
    int date;

public:
    user();
    user(string, string, int, int, float, float, int, int, int);
    user(const user &);
    user &operator+(const user &);
    user &operator=(const user &);
    friend ostream &operator<<(ostream &, const user &);
    string getName() const;
    string getSurname() const;
    int getId() const;
    int getAge() const;
    float getWeight() const;
    float getHeight() const;
    int getTotal() const;
    int getBurned() const;
    int getDate() const;
    void setDate(int x);
    void setName(string);
    void setSurname(string);
    void setId(int);
    void setAge(int);
    void setWeight(float);
    void setHeight(float);
    void setTotal(int);
    void setBurned(int);
    void istatistic();
    void USERmode();
    void DEVELEPORmode();
};
#endif // _USER_H