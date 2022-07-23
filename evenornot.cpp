#include <iostream>
using namespace std;
int main()

//program to check nos. is even or not
//using if...else statement
{
    int n;
    cout <<"Enter an Integer: ";
    cin >>n;

    if(n%2 == 0)
    {
        cout <<n <<"  is even";
    }
    else
    {
        cout <<n <<"  is odd";
    }
     return 0;
}
