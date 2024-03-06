/*compare() Method
The compare() method compares two strings lexicographically including case sensitive comparison.
 It returns a negative value if the first string is less then the second string.
 A positive value if the first string is greater than the second string. It returns zero if both are same.*/

 #include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    string str1;
    string str2;

    cout<<"Enter 1st name : ";
    getline(cin,str1);
    cout<<"First name : "<<str1<<"\n";

    cout<<"Enter 2nd name : ";
    getline(cin,str2);
    cout<<"Second name : "<<str2<<"\n";

    cout<<"Comparision : "<<str1.compare(str2);

    // if(s1.compare(s2)==0)
    // {
    //     cout<<"Both strings are same";
    // }
    // else
    // {
    //     cout<<"Both strings are not same";
    // }

    return 0;    

}