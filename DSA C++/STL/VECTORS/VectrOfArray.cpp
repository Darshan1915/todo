#include <iostream>
#include <vector>

using namespace std;

void printvec( vector<int> v){
    for (int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int N;
    cin>>N;
    vector <int> v[N];
    for (int i = 0; i<N; i++){
        int n;
        cin>>n;
        for (int j = 0; j<n; j++){
            v[i].push_back(n);
        }
    }


    for(int i =0; i<N; i++){
        printvec(v[i]);
    }

 
    return 0;
}