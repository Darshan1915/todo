#include <iostream>

using namespace std;

void calculate()
{
    static int x=0;
    x=x+1;
    cout<<"x="<<x<<endl;
}

int main()
{
    // first time function call
    calculate();

    // second time function call
    calculate();


    return 0;
}