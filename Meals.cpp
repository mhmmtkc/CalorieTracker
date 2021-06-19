#include <iostream>
#include "Meals.h"
using namespace std;
//  static veri üyeleri fonsiyonda kullanılırken tanımlanması gerekiyormus.
// bunu öğrendim birkaç saatin sonunda .
int Breakfast::blarge;
int Breakfast::bmedium;
int Breakfast::bsmall;
int Lunch::llarge;
int Lunch::lmedium;
int Lunch::lsmall;
int Dinner::dlarge;
int Dinner::dmedium;
int Dinner::dsmall;
Meal::Meal()
{
    Calorie = 0;
}

void Meal::setCalorie(int g)
{
    Calorie = g;
}
Meal::Meal(const Meal &obj)
{
    //	this->small=obj.small;
    //	this->medium=obj.medium;
    //	this->large=obj.large;
    this->Calorie = obj.Calorie;
}
Meal &Meal::operator=(const Meal &obj)
{
    //	this->small=obj.small;
    //	this->medium=obj.medium;
    //	this->large=obj.large;
    this->Calorie = obj.Calorie;
    return *this;
}
Meal &Meal::operator+(const Meal &x)
{
    this->Calorie = this->Calorie + x.Calorie;
    return *this;
}
int Meal::getCalorie() const
{
    return Calorie;
}
//int Meal::getSmall() {
//	return small;
//}
//int Meal::getMedium() {
//	return medium;
//}
//int Meal::getLarge() {
//	return large;
//}
//Breakfast::Breakfast(int x){
//	Calorie=x;
//}

ostream &operator<<(ostream &out, const Breakfast &obj)
{

    // out << "\tTotal calorie is " << obj.getCalorie() << " in this breakfasts of week" << endl;
    out << "\tCalorie is " << obj.getCalorie() << " in breakfast of today" << endl;
    out << "\tsmall:" << Breakfast::bsmall << "	  medium:" << Breakfast::bmedium << "	large:" << Breakfast::blarge << endl
        << endl;
    return out;
}
ostream &operator<<(ostream &out, const Lunch &obj)
{

    out << "\tCalorie is " << obj.getCalorie() << " in lunch of today" << endl;
    return out;
}
ostream &operator<<(ostream &out, const Dinner &obj)
{

    out << "\tCalorie is " << obj.getCalorie() << " in dinner of week" << endl;

    return out;
}
void mealSize()
{
    cout << "\n\tS for small" << endl;
    cout << "\tM for medium" << endl;
    cout << "\tL for Large" << endl;
    cout << "\tChoose meal size ...?";
}
int Breakfast::chooser()
{
    char ch;
    bool flag = true;
    do
    {
        mealSize();
        cin >> ch;
        if (ch == 'S' || ch == 's')
        {
            Calorie += 200;
            Breakfast::bsmall++;
            flag = false;
        }
        else if (ch == 'M' || ch == 'm')
        {
            Calorie += 400;
            Breakfast::bmedium++;
            flag = false;
        }
        else if (ch == 'L' || ch == 'l')
        {
            Calorie += 600;
            Breakfast::blarge++;
            flag = false;
        }
    } while (flag);
    return 0;
}
int Lunch::chooser()
{
    char ch;
    bool flag = true;
    do
    {
        mealSize();
        cin >> ch;
        if (ch == 'S' || ch == 's')
        {
            Calorie += 400;
            Lunch::lsmall++;
            flag = false;
        }
        else if (ch == 'M' || ch == 'm')
        {
            Calorie += 600;
            Lunch::lmedium++;
            flag = false;
        }
        else if (ch == 'L' || ch == 'l')
        {
            Calorie += 800;
            Lunch::llarge++;
            flag = false;
        }
    } while (flag);
    return 0;
}
int Dinner::chooser()
{
    char ch;
    bool flag = true;
    do
    {
        mealSize();
        cin >> ch;
        if (ch == 'S' || ch == 's')
        {
            Calorie += 400;
            Dinner::dsmall++;
            flag = false;
        }
        else if (ch == 'M' || ch == 'm')
        {
            Calorie += 600;
            Dinner::dmedium++;
            flag = false;
        }
        else if (ch == 'L' || ch == 'l')
        {
            Calorie += 800;
            Dinner::dlarge++;
            flag = false;
        }
    } while (flag);
    return 0;
}