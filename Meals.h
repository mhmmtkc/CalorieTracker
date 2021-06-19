#ifndef _MEALS_H
#define _MEALS_H
#include <iostream>
using namespace std;
class Meal
{
public:
	// Public Declarations
	Meal();
	Meal(const Meal &);
	Meal &operator=(const Meal &);
	Meal &operator+(const Meal &);
	int getCalorie() const;
	void setCalorie(int g);
	//		int getSmall();
	//		int getMedium();
	//		int getLarge();

	//		friend ostream& operator<<(ostream&,const Meal&);

protected:
	// Protected Declarations
	int Calorie;
};

class Breakfast : public Meal
{
	// Private section
	//	static int small;
	//	static int medium;
	//	static int large;

public:
	// Public Declarations
	//	Breakfast& operator+(const Breakfast&);
	friend ostream &operator<<(ostream &, const Breakfast &);
	int chooser();
	static int bsmall;
	static int bmedium;
	static int blarge;
	//	Breakfast(int x);
};

class Lunch : public Meal
{
public:
	// Public Declarations
	//	Lunch& operator+(const Lunch&);
	friend ostream &operator<<(ostream &, const Lunch &);
	int chooser();
	static int lsmall;
	static int lmedium;
	static int llarge;
};

class Dinner : public Meal
{
public:
	// Public Declarations
	//		Dinner& operator+(const int,const char);
	friend ostream &operator<<(ostream &, const Dinner &);
	int chooser();
	static int dsmall;
	static int dmedium;
	static int dlarge;
};
#endif
