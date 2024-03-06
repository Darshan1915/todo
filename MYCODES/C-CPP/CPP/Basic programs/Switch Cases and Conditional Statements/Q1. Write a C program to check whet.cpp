//Q1. Write a C program to check whether a given character is a vowel or a consonant
#include <iostream>
using namespace std;
int main()
{
    int i,count=0;
    
    // char arr[5];
    // for ( i=0; i<5; i++)
    // {
    //     cin>>arr[i];
    // }
    
    char c;
    cout<<"Enter your charecter : ";
    cin>>c;
    
    for (i=0; i<5; i++)
    {
        if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||  c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            cout<<"Entered charecter is vowel";
            count=1;
            break;
        }
        else
        {
            cout<<"Entered charecter is consonant";
            count=1;
            break; 
        }
        
    }

    return 0;
}