
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str1[100];
    char str2[100];

    cout<<"Enter 1st name : ";
    cin.getline(str1,100);
    //cout<<"First name : "<<str1<<"\n";

    cout<<"Enter 2nd name : ";
    cin.getline(str2,100);
    //cout<<"Second name : "<<str2<<"\n";

    cout<<strupr(str1)<<"\n";
    cout<<strupr(str2)<<"\n";

    cout<<strlwr(str1)<<"\n";
    cout<<strlwr(str2)<<"\n";

    return 0;    

}





