//Program to input a word in a string object and print individual characters on separate lines using at() function.
#include <iostream>
using namespace std;
int main()
{
    string str;

    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<"your string : "<<str<<"\n";

    for ( int i=0; i<str.size(); i++)
    {
        cout<<str.at(i)<<endl;
        //cout<<"\n";
    }

    return 0;
}
