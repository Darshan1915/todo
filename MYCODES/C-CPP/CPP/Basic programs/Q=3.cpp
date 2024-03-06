//Write a C program to print the Fibonacci series up to a given number
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int num1=0,num2=1,num3,i,n;
    num3 = num1 + num2;
    
    cout<<"Enter the number upto you want to print the fibonacci series : ";
    cin>>n;
    
    cout<<num1;
    cout<<" ";
    cout<<num2;
    cout<<" ";
    
    for( i=2; i<=n; i++)
    {
        cout<<num3;
        cout<<" ";
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    
    return 0;
}