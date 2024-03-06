// substr() Method
// The substr() method returns a new string which is a substring of the current string.

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string s="Superman";

    cout<<"Print the 1st 3 characters of the current string : "<<s.substr(0,3)<<endl;
    cout<<"Print the 1st 3 characters starting from index 2 : "<<s.substr(2,3)<<endl;
    cout<<"Print all the characters starting from index 5 till end : "<<s.substr(5);
    
    return 0;
}