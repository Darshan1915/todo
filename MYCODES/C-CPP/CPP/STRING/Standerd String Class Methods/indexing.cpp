//at() Method
//The at() method returns the character at the specified index. In a string, the first character starts from index 0.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout<<"Your string : ";
    getline(cin,str);

    int x;
    cout<<"Enter index number : ";
    //cin.getline()
    cin>>x;

    cout<<"Your charectr finds at index number which you entered : "<<str.at(x);

    return 0;
}