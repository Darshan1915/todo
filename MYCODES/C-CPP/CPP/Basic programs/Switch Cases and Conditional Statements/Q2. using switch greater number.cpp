//Q2. Write a C program to find the largest among three numbers using switch case.
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    
    cout<<"Enter your three numbers : ";
    cin>>num1>>num2>>num3;
    
    
    switch ( num1>num2)
    {
        case 1:
        switch ( num1>num3)
        {
            case 1:
            cout<<" greater number is = "<<num1;
            break;
            
            case 0:
            cout<<" greater number is = "<<num3;
            break;
        }
        break;
        
        case 0:
        switch ( num2>num3)
        {
            case 1:
            cout<<" greater number is  "<<num2;
            break;
            
            case 0:
            cout<<" greater number is  "<<num3;
            break;
        }
        break;
        
    }
  
    return 0;
}