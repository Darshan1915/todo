#include <iostream>
using namespace std;
class binarysearch11
{
    public:
    int size, i, arr[size],k, MT;
    void arrayy()
    {
        cout<<"Entere array selements: ";
        for( i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        cout<<"Your Entered array elementse: ";
        for( i=0; i<size; i++) 
        {
            cout<<arr[i];
        }
    }
    void search ()
    {
        cout<<"Enter a elements which you have to find in array: ";
        cin>>k;
        MT = size/2;
        if ( arr[MT]==arr[k])
        {
            cout<<MT;
        }
        else
        {
            size = MT - 1;
            for( i=0; i<size; i++) 
            {
                if ( arr)
            }
        }

    }
};

int main()
{
    binarysearch11 x;

    int size;
    cout<<"Ente your array size: ";
    cin>>size;
    int arr[size];

    x.arrayy();

    return 0;
}