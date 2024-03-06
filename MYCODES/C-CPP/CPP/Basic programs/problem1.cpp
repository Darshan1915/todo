#include<iostream>
using namespace std;
int main()
{
    int TW, FW, v, noTWwheel, noFWwheel, Toatalwheel;
    cout<<"Enter numners of  TW Cars: ";
    cin>>TW;
    cout<<"\nEnter numners of  FW Cars: ";
    cin>>FW;
    v = TW + FW;
    cout<<"\nTotal numbers of cars is : "<<v;
    noTWwheel = TW*2;
    noFWwheel = FW*4;
    Toatalwheel = noTWwheel + noFWwheel;
    cout<<"\nTotal no of wheels are: "<<Toatalwheel;

    
    return 0;
}