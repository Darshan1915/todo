#include <iostream>
#include <vector>
using namespace std;

// class V{
//     public:

//     vector <int> arr={10,20,30,40};

//     void display(){
//         for(int i = arr.begin() ; i<= arr.end(); i++)
//         {
//             cout<<arr
//         }
//     }
// };

int main(){

    vector <int> arr{10,20,30,40};

    cout << "Output of begin and end: ";
    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        cout << *i << " ";
    }

    cout <<"\nOutput of cbegin and cend: ";
    for (auto i = arr.rbegin(); i != arr.rend(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}