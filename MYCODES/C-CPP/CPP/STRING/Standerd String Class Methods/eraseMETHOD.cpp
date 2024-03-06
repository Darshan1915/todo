//erase() Method
//The erase() method removes the specified number of characters from the string object including the specified index.

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string s="Hello World";
    s.erase(1,5);
    cout<<"String = "<<s;
    return 0;
}