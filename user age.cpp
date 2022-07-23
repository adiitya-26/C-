#include <iostream>
using namespace std;
int main()
// Program to check whether the age of user
// is  less than 18 or not
{
   int age;
   cin >> age;
   cout <<"Your age is: " <<age <<endl;



   if( age < 18)
   {
     cout <<"You are under age";
   }
   else
   {
     cout <<"You are not under age";
   }
   return 0;
}
