#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str1[100];
    cout<<"Enter 1st name : ";
    //cin>>str;
    cin.getline(str1,100);
    cout<<"First name : "<<str1<<"\n";

    cout<<"String lengh is : "<<strlen(str1);

    // string str2;
    // cout<<"Enter 2nd name : ";
    // //cin>>str;
    // getline(cin,str2);
    // cout<<"Second name : "<<str2;

    return 0;    

}