//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// void display( map <int , string> &m){
//     cout<<"Size: "<<m.size()<<endl;
//     map <int , string> :: iterator it;
//     for ( it = m.begin(); it != m.end();it++ ){
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//     }
// }

//other method to display map using auto key-word:
void display( map <int , string> &m){
    cout<<"Size: "<<m.size()<<endl;
    for (auto &pr : m ){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map <int , string> m;
    m[1] = "ABC";
    m[3] = "DEF";
    m[2] = "GHI";
    m[7] = "JKL";
    m[9] = "MNO";

    display(m);

    //other functions used in map
    // .find()
    //.erase()
    //.clear()

    auto i = m.find(3);
    if( i == m.end()){
        cout<<"No Value"<<endl;
    }else{
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    
    auto j = m.erase(3);
    display(m);

    m.clear();
    display(m);
    return 0;
}