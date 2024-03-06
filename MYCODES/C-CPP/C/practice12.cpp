#include <stdio.h>
void calculate()
{
    static int x=0;
    x=x+1;
    //cout<<"x="<<x<<endl;
    printf(" x = %d",x);
}

int main()
{
    // first time function call
    calculate();

    // second time function call
    calculate();


    return 0;
}