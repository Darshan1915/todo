#include <iostream>
using namespace std;

//function overloading

class Apnacollage
{
    public:
    void fun()
    {
        cout<<"function with no argument\n";
    }
    void fun(int x)
    {
        cout<<"function with int argument\n";
    }
    void fun(double x)
    {
        cout<<"function with double argument";
    }
};
int main()
{
    Apnacollage obj;

    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    return 0;
}