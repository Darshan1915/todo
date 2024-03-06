//Q5. Write a C program to calculate the factorial of a given number
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int n,i,result=1;
    cout<<"Enter number for factorial = ";
    cin>>n;
    for ( i=n; i>0 ;i--)
    {
        result = result * i;
    }
    cout<<"Factorial = "<<result;
    
    return 0;
}
