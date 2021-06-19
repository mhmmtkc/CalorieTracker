#include <iostream>
#include "Sports.h"
using namespace std;

int Basketball::bcounter;
int Tennis::tcounter;
int Football::fcounter;
int Swimming::scounter;

Sport::Sport()
{
    time = 0;
    burnedCalories = 0;
}
int Sport::getTime() const { return time; }
void Sport::setTime(int x) { time = x; }
int Sport::getCalories() const { return burnedCalories; }
void Sport::setCalories(int a) { burnedCalories = a; }
Sport &Sport::operator=(const Sport &obj)
{
    this->burnedCalories = obj.burnedCalories;
    this->time = obj.time;
    return *this;
}
Sport &Sport::operator+(const Sport &obj)
{
    this->burnedCalories += obj.burnedCalories;
    this->time += obj.time;
    return *this;
}
Sport::Sport(const Sport &obj)
{
    this->burnedCalories = obj.burnedCalories;
    this->time = obj.time;
}

ostream &operator<<(ostream &out, const Sport &x)
{
    out << "You burned " << x.getCalories() << " kcal in " << x.getTime() << " minutes" << endl;
    return out;
}

void Basketball::timer()
{
    cout << "\tHow many minutes did you exercise?" << endl;
    cin >> time;
    burnedCalories += 6 * time;
    bcounter++;
}
void Swimming::timer()
{
    cout << "\tHow many minutes did you exercise?" << endl;
    cin >> time;
    burnedCalories += 7 * time;
    scounter++;
}
void Football::timer()
{
    cout << "\tHow many minutes did you exercise?" << endl;
    cin >> time;
    burnedCalories += 5 * time;
    fcounter++;
}
void Tennis::timer()
{
    cout << "\tHow many minutes did you exercise?" << endl;
    cin >> time;
    burnedCalories += 5 * time;
    tcounter++;
}