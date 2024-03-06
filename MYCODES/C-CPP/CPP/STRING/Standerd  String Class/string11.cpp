//We can use getline() function to take input in a string object, and print the string using cout statement. 
//See the example given below.


#include<iostream>
using namespace std;
int main()
{
    string str;

    cout<<"Enter your string : ";
    //cin>>str;
    getline(cin,str);
    cout<<"your string : "<<str;

    return 0;
}