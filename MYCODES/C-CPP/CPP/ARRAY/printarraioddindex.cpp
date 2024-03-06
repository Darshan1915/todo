#include <iostream>
using namespace std;
int main()
{
    int size,i;

    cout<<"Enter your array size: ";
    cin>>size;

    int arr[size];
    cout<<"Enter your array elements: ";
    for ( i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your entered array elements: ";
    for ( i=0; i<size; i++)
    {
        cout<<arr[i];
    }

    cout<<"Your elements at ODD index no. : ";
    for ( i=0; i<size; i++)
    {
        //int z;
        //z=i%2;
        if (i%2==0)
        {
            cout<<" ";
        }
        else
        {
            cout<<arr[i]; 
        }
       
    }

    return 0;
}