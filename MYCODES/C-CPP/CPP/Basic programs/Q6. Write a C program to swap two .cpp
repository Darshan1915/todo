// Q6. Write a C program to swap two numbers using call by reference.
#include <iostream>
using namespace std;
int swap (int *num1, int *num2)
{
    *num1 = *num1+*num2;
    
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
    
    return 0;
}    
    
int main() 
{
    int n1, n2;
    cout<<"Enetr your 1st number = ";
    cin>>n1;
    cout<<"Enetr your 2nd number = ";
    cin>>n2;
    
    swap (&n1, &n2);
    
    cout<<"After swaping your 1st number is : "<<n1<<"\n";
    cout<<"After swaping your 2nd number is : "<<n2;
    return 0;
}