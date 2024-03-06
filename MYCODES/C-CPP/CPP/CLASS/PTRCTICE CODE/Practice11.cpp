//write a pg to get student data using class

#include <iostream>
#include <string.h>
using namespace std;

class data
{
    public:
    char name[100];
    int rollnumber;

};
int main ()
{
    data z;
    cout<<"Enter your name : ";
    cin>>z.name;
    cout<<"Enter your roll number : ";
    cin>>z.rollnumber;

    cout<<"Your name is :"<<z.name<<"\n";
    cout<<"Your roll number is :"<<z.rollnumber<<endl;

    return 0;
}