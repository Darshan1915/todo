// Q11. Write a C program to print the pattern:
// *
// **
// ***
// ****
// *****
#include <iostream>
using namespace std;
int main() 
{
    int n=5;
    int count =n;
    for(int i=1; i<=n; i++){
        for(int j=count;  j>0; j--){
            cout<<"*";
        }
        cout<<endl;
        count--;
    }

    // int count = 5;
    // for(int i=1; i<=5; i++){
    //     for(int j=count;  j>0; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     count--;
    // }

    //for( int i = 1; i<= 4; i++)
    // {
    //     for( int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
    return 0;
}