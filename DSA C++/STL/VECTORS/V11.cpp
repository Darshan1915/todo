#include <iostream>
#include <vector>


using namespace std;

void printvec( vector<int> v){
    for (int i=0; i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}

int main(){

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    printvec(v);

    v.pop_back();

    printvec(v);


    return 0;
}