#include <iostream>
using namespace std;

class practicecalculater
{
    public:
    int x,y,ch;
    void add()
    {
        cout<<"Addition is: "<<x+y;
    }
    void sub()
    {
        cout<<"Substraction is is: "<<x-y;
    }
};
int main()
{
    practicecalculater result;

    int x,y,ch;
    cout<<"Enter your numbers: ";
    cin>>x>>y;
    cout<<"Enter your choice: \n1.add \n2.substract\n";
    cin>>ch;

    switch (ch)
    {
        case 1:
        {
            result.add();
            break;
        }
        case 2:
        {
            result.sub();
        }
    }

    return 0;
}
        