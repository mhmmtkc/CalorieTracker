#if !defined(_SPORTS_H)
#define _SPORTS_H
#include <iostream>

class Sport
{
protected:
    int time;
    int burnedCalories;

public:
    Sport();
    Sport(const Sport &);
    Sport &operator=(const Sport &);
    Sport &operator+(const Sport &);
    friend std::ostream &operator<<(std::ostream &, const Sport &);
    int getTime() const;
    int getCalories() const;
    void setTime(int);
    void setCalories(int);
};

class Basketball : public Sport
{
public:
    // friend std::ostream &operator<<(std::ostream &, const Sport &);
    static int bcounter;
    void timer();
};
class Football : public Sport
{
public:
    // friend std::ostream &operator<<(std::ostream &, const Sport &);
    void timer();
    static int fcounter;
};
class Swimming : public Sport
{
public:
    // friend std::ostream &operator<<(std::ostream &, const Sport &);
    void timer();
    static int scounter;
};
class Tennis : public Sport
{
public:
    // friend std::ostream &operator<<(std::ostream &, const Sport &);
    void timer();
    static int tcounter;
};

#endif //SPORTS H
