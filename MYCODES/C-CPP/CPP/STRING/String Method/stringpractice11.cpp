#include <iostream>
#include <string.h>
using namespace std;
class data
{
    public:
    char name[100];
    int age;

    //Defoult contructer
    data ()
    {
        strcpy(name,"Learnet");
        age=20;
    };

    //parameterized constructer
    data ( char a[],int agee)
    {
        strcpy(name,a);
        age=agee;
    };

};
int main ()
{
    // data x;
    // cout<<"Enter something : ";
    // cin.getline(x.name,100);
    // cout<<x.name<<"\n";

    data x;
    cout<<"String : "<<x.name<<endl;
    cout<<"age is : "<<x.age<<"\n";

    data y ( "Learnettt",18);
    cout<<"Stringg : "<<y.name<<endl;
    cout<<"age  : "<<y.age<<"\n";


    return 0;
}