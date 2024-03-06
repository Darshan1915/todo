//append() Method
//The append() method adds the specified character sequence at the end of the string object. We can also use the + operator to append character sequence at
//the end of the string object.

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string s="Hello";
    s.append(" World");
    cout<<"String = "<<s<<endl;
    s=s+" I am learning C++ Programming";
    cout<<"String = "<<s<<endl;
    return 0;
}