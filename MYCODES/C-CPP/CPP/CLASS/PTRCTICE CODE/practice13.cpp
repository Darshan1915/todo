//write a pg to get student data using class

#include <iostream>
#include <string.h>
using namespace std;
class data
{
    public:
    int rollno;
    char name[100];
    char adress[100];

    void accept ()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your roll number : ";
        cin>>rollno;
        cout<<"Enter your adress : ";
        cin>>adress;
    }
    void printed ()
    {
        cout<<"Your name is : "<<name<<"\n";
        cout<<"Your roll number is :"<<rollno<<"\n";
        cout<<"Your adress  is : "<<adress<<"\n";
    }

};
int main ()
{
    data x;
    x.accept();
    x.printed();

    return 0;
}