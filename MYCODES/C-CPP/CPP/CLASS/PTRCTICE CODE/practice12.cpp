//write a pg to get student data using class

#include <iostream>
#include <string.h>
using namespace std;

class data
{
    private:
    char name[100];
    int rollnumber;
    public:
    void student ()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your roll number : ";
        cin>>rollnumber;   
        cout<<"Your name is :"<<name<<"\n";
        cout<<"Your roll number is :"<<rollnumber<<endl;
    }

};
int main ()
{
    data k;
    k.student();   
    return 0;
}