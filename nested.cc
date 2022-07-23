#include <iostream>
using namespace std;
int main()

/* Program to find an integer is positive,
   negative or zero. Using nested if...else statement */
{
    int num;
    cout <<"Enter an integer: ";
    cin >> num;
  // outer if condition
    if(num != 0)

  // inner if condition
    if(num > 0)
    {
      cout <<"The number is positive" << endl;
    }

  // inner else condition
    else
    {
      cout <<"The number is negative" << endl;
    }

  // outer else condition
    else
    {
      cout <<"The number 0 is neither positive nor negative." << endl;
    }
    cout <<"This line is always printed" << endl;

    return 0;


  }
