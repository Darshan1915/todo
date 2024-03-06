//The strcpy() method copies the string str2 into string str1, including null character ('\0').

#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str1[50]="string 1";
    char str2[50]="string 2";

    cout<<"Enter 1st name : ";
    cin.getline(str1,100);

    cout<<"Enter 2nd name : ";
    cin.getline(str2,100);

    cout<<"Before copy"<<"\n";

    cout<<"First name : "<<str1<<"\n";
    cout<<"Second name : "<<str2<<"\n";

    cout<<"After copy"<<"\n";

    /* this function has copied str2 into str1*/
    strcpy(str1,str2);
    //now str1 == str2
    /* this function has copied str1 into str2*/
    strcpy(str2,str1);

    cout<<"First name : "<<str1<<"\n";
    cout<<"Second name : "<<str2<<"\n";

    return 0;
}