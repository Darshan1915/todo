//Q10. Write a C program to display the multiplication table of a given number.
#include <iostream>
using namespace std;
int main() 
{
    int n,i,result;
    
    cout<<"Enter your number : ";
    cin>>n;
    
    for ( i=1; i<=10; i++)
    {
        result = n*i;
        //n = n*i;
        cout<<result<<"\t";
    }
    
    return 0;
}