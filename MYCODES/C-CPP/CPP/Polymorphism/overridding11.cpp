#include <iostream>
using namespace std;

class math
{
    public:
    virtual void cal( int a, int b)
    {
        int result = a+b;
        cout<<"Result : "<<result;
    }

};
class abc: public math
{
    void cal ( int a, int b)
    {
        int result = a-b;
        cout<<"Result : "<<result;
    }
    
};

// int main()
// {
//     math* m;
//     abc a;
//     m=&a;
//     m->cal(10,5);
//     return 0;
// }

int main()
{
    math m;
    abc a;   
    m.cal(10,5);
    return 0;
}