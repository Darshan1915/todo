// Q13.Write a C program to print the pattern:
// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main() 
{
    int count=4;
    for( int i = 1; i<= 4; i++)
    {
        for( int j = count; j >=1; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
        count--;
    }
    return 0;
}