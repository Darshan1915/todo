//Write a C program to find the sum of all even numbers between 1 and 100.
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int i,sum=0;
    cout<<"First natural numbers are : ";
    for ( i=1; i<=100; i++)
    { 
        if( i%2==0 )
        {
            sum  = sum + i;
        }
    }
    cout<<sum;
    
    return 0;
}