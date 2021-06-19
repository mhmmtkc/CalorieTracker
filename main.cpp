/**
 * @file main.cpp
 * @author muhammet koc
 * @brief  Calorie Tracker
 * @version 0.1
 * @date 2021-05-29
 * @copyright Copyright (c) 2021
 */

#include "Meals.h"
#include "User.h"
#include "Sports.h"
#include <iostream>
using namespace std;

int main()
{
  char x;
  int mode;
  bool flag = true;
  while (flag)
  {
    cout << "\n\t[1]  FOR USER MODE " << endl
         << endl
         << "\t[2]  FOR DEVELOPER MODE" << endl;
    std::cout << "\tChoose, please ...:";
    cin >> mode;
    user User;
    user Developer;
    switch (mode)
    {
    case 1:
    //  User.istatistic();
      User.USERmode();
      cout << User;
      User.istatistic();

      flag = false;
      break;
    case 2:
      Developer.DEVELEPORmode();
      flag = false;
      break;
    default:
      break;
    }
  }

  cin.ignore();
  cout << "press any key to close ....:";
  x = getchar();
  return 0;
}
