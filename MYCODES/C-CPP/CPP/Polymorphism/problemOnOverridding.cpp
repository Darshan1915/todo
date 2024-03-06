#include <iostream>
using namespace std;
class student
{
    public:
    char name[100];
    char adrs[100];
    //vertual : it is imp word
    virtual void info()
    {
        cout<<"Enter your name: ";
        cin.getline(name,100);
        cout<<"Enter your adress: ";
        cin.getline(adrs,100);

        cout<<"Your name is: "<<name<<endl;
        cout<<"Your adress is: "<<adrs<<endl;
    }
};
class parents : public student
{
    void info()
    {
        cout<<"Enter your collage name: ";
        cin.getline(name,100);
        cout<<"Enter your collage adress: ";
        cin.getline(adrs,100);

        cout<<"Your collage name is: "<<name<<endl;
        cout<<"Your colllage adress is: "<<adrs<<endl;
    }
};
int main()
{
    student x;
    x.info();
    student* y;
    parents z;
    y=&z;
    y->info();
    return 0;
}

//what is use of over ridding ???????????????????????
