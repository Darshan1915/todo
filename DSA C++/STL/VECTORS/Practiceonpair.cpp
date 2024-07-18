#include <iostream>
using namespace std;

// int main()
// {
//     //making pair ond inserting and displaying
//     pair <int ,int >p;
//     p = make_pair(2,4);
//     p = {6, 8};

//     cout<<p.first<<" "<<p.second;

//     return 0;
// }


int main()
{
    pair <int ,int > p_array[3];
    p_array[0] ={1,2};
    p_array[1] = {3,4,};
    p_array[2] = {5,6};

    for (int i = 0; i<3; i++ )
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<" ";
    }

    return 0;
}