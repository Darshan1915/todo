//Q4. Write a C program to check whether a given number is prime or not.
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int n,i,f=0;
    
    cout<<"Enter a number : ";
    cin>>n;
     
     if(n==1 || n==0)
     {
         cout<<"Given number is not prime number";
     }
     else if ( n==2)
     {
         cout<<"Given number is the only number which is even as well as prime number";
     }
     else 
     {
         for (i=2; i<n; i++)
         {
             if (n%i==0)
             {
                cout<<"Given number is not prime number";
                f=1;
                break;
             }
             else
             {
                 cout<<"Given number is prime number";
                 //f=1;
                 break;
             }
         }
         
     }
    
    return 0;
}