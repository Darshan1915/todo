#include<iostream>
using namespace std;
class Shorum 
{
    public:
    int V, W, TW, FW;
    void input()
    {
        cout<<"Enter total numners of  Vehicles : ";
        cin>>V;
        cout<<"\nEnter total numners of  Wheels: ";
        cin>>W;
    }
    void result()
    {
        if ( 2>W && W<=V && W%2!=0 )
        {
            cout<<"INVALID INPUT";
        }
        else
        {
            TW = ( V*4 - W)/2;
            cout<<"Number of twowheeler is: "<<TW;
            FW = (200 - TW);
            cout<<"\nNumber of twowheeler is: "<<FW;
        }
    }
};
int main()
{
    Shorum x;
    x.input();
    x.result();

    // int V, W, TW, FW;
    // cout<<"Enter total numners of  Vehicles : ";
    // cin>>V;
    // cout<<"\nEnter total numners of  Wheels: ";
    // cin>>W;

    // if ( 2>W && W<=V && W%2!=0 )
    // {
    //     cout<<"INVALID INPUT";
    // }
    // else
    // {
    //     TW = ( V*4 - W)/2;
    //     cout<<"Number of twowheeler is: "<<TW;
    //     FW = (200 - TW);
    //     cout<<"\nNumber of twowheeler is: "<<FW;
    // }

    return 0;
}