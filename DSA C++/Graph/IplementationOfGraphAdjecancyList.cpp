#include <iostream>
#include <map>
#include <list>

using namespace std;

class graph {
    public:

    map <int,list<int>> adj;

    void addEdge( int n, int m, bool direction){

        //derection = 0 -> undirected graph;
        //derection = 1 -> directed graph;

        //create an edge n to v
        adj[n].push_back(m);
        if(direction == 0){
           adj[m].push_back(n); 
        }
    } 

    void printAdjList(){
        for (auto i: adj){
            cout<<i.first<<"->";
            for (auto j : i.second){
                cout<< j << " , ";
            }
            cout<<endl;
        }
    }   
    
};

int main()
{
    int u,v;
    cout<<"Enter no. of nodes: ";
    cin>>u;
    cout<<"Enter no. of edge: ";
    cin>>v;

    graph g;

    for (int i=0; i<v; i++){
        int n,m;
        cin>>n>>m;

        // creating an undirection graph
        g.addEdge(n,m,0);
    }

    //printing graph
    g.printAdjList();

    return 0;
}