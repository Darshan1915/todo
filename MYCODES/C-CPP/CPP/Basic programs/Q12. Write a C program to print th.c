// Q12. Write a C program to print the pattern:
// 1
// 22
// 333
// 4444
#include <iostream>
using namespace std;
int main() 
{

    for( int i = 1; i<= 5; i++)
    {
        for( int j = 1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}