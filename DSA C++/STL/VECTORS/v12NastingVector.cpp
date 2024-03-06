#include <iostream>
#include <vector>


using namespace std;

void printvec( vector<pair<int,int>> v){
    for (int i=0; i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main(){
    vector <pair<int,int>> v;

    /*(This is simple implementation)
    vector <pair<int,int>> v = {{2,4},{3,6},{4,8},{5,10}};

    printvec(v);
    */
   //Take input from user:-
    int n;
    cout<<"ENter an size: ";
    cin>>n;//Take size from user and we can increaseable this size anytime
    cout<<"Enters elements: ";
    for(int i=0; i<n;i++){
        int x,y;
        //cout<<"Enters elements: ";
        cin>>x>>y;
        //v.push_back({x,y}); (it is also use)
        v.push_back(make_pair(x,y));
        cout<<endl;
    }

    printvec(v);

    return 0;
}