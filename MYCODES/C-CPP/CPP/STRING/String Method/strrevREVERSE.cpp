#include <string.h>
#include <iostream>
using namespace std;
int main ()
{
    char str1[30]="LEARNET";

    // convert the str1 into reverse order
    strrev(str1);
    cout<<"str1 is: "<<str1;
    return 0;
}