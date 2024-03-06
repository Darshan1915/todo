#include <iostream>
#include <vector>
using namespace std;

class V{
    public:

    vector<int> arr;
    void declare(){
        for( int i=0; i!=5; i++)
        {
            arr.push_back(i);
        }
    }

    void display(){
        for(auto it = arr.begin() ; it != arr.end(); it++)
        {
            cout<< *it <<" ";
        }
    }
};

int main(){
    V v;
    v.declare();
    v.display();

    
    
    return 0;
}