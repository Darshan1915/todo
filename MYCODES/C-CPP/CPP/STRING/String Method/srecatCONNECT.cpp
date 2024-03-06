//The strcat() method concatenates two strings and returns the concatenated string.
//The function is defined in <string.h> header file.


#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str1[100];
    char str2[100];

    cout<<"Enter 1st name : ";
    cin.getline(str1,100);
    //cout<<"First name : "<<str1<<"\n";

    cout<<"Enter 2nd name : ";
    cin.getline(str2,100);
    //cout<<"Second name : "<<str2<<"\n";

    cout<<"Your full name is : "<<strcat(str1,str2)<<"\n";
    cout<<"Your full name is : "<<strcat(str2,str1);

    return 0;    

}