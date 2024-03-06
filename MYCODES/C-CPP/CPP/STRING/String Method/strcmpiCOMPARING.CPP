// The strcmpi() method compares the two strings without their case (upper and lower case)
//  and returns an integer value. If both the strings are same (equal) then this function would return 0 otherwise
//   it may return a negative(-1) or positive(1) value based on the comparison. The function is defined in <string.h> header file.

#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str1[100];
    char str2[100];

    cout<<"Enter 1st name : ";
    //cin>>str;
    cin.getline(str1,100);
    cout<<"First name : "<<str1<<"\n";

    cout<<"Enter 2nd name : ";
    //cin>>str;
    cin.getline(str2,100);
    cout<<"Second name : "<<str2<<"\n";

    cout<<"Comparision : "<<strcmpi(str1,str2);

    // if(strcmpi(str1,str2)==0)
    // {
    //     cout<<"str1 and str2 both are same";
    // }
    // else
    // {
    //     cout<<"str1 and str2 are not same";
    // }

    return 0;    

}