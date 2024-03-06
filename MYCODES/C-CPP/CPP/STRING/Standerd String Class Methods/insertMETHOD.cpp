//The insert() method insert a specified string in the string object at the specified index.

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string s="Tier";
    s.insert(2,"g");
    cout<<"String = "<<s;
    return 0;
}