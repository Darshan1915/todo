#include <iostream>
using namespace std;
int main ()
{
    int x,y,i,k,z;
    int j;
    cout<<"Enter the matrix size : ";
    cin>>x>>y>>z;

    int a[x][y];
    cout<<"Enter matrix elements : \n";
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            for( k=0; k<z; k++)
            {
                cin>>a[k][i][j];
            }
        }
    }

    cout<<"\n";
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            for( k=0; k<z; k++)
            {
                cin>>a[k][i][j]<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}

