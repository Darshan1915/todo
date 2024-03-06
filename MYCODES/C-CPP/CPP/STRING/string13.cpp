#include <iostream>
using namespace std;
int main()
{
    char name[100];
   
    cout<<"Enter your full name : ";
    cin>>name;
    cout<<"Your full name is : "<<name<<"\n";

    for (int i=0;name[i]!='\0';i++)
    {
        cout<<name[i]<<"\n";
    }

    return 0;
}