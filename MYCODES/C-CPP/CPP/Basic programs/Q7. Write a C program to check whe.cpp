// Q7. Write a C program to check whether a given year is a leap year or not using a
// function.
#include <iostream>
using namespace std;
int leap ( int year)
{
    if (year%4==0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main ()
{
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    
    int function = leap ( year );
    
    if ( function==1)
    {
        cout<<"The entered year is leap year ";
    }
    else
    {
        cout<<"The entered year is not leap year ";
  
    }
  
}