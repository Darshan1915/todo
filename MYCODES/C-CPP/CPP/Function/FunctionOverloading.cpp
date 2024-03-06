// Function Overloading in C++ is a process in which we declare more than one function having the same name but with different numbers of 
// arguments. By overloading a function, we can perform more than one task using the same name.

// Suppose we declare a function called sum that takes two arguments for addition and another function with the same name, sum that 
// takes three arguments for addition. In this case, we have overloaded the function sum.

// Let's see an example of how we can overload a function in C++.

//find largest number:

#include <iostream>
using namespace std;

int max(int a, int b)
{
    int m=0;
    if(a>b)
    {
        m=a;
    }
    else if(b>a)
    {
        m=b;
    }
    return m;
}

int max(int a, int b, int c)
{
    int m=0;
    if(a>b && a>c)
    {
        m=a;
    }
    else if(b>a && b>c)
    {
        m=b;
    }
    else if(c>a && c>b)
    {
        m=c;
    }
    return m;
}

int main()
{
    int x,y,z;
    cout<<"Enter 2 integer numbers"<<endl;
    cin>>x>>y;
    cout<<"Maximum number = "<<max(x,y)<<endl;;
    cout<<"Enter 3 integer numbers"<<endl;
    cin>>x>>y>>z;
    cout<<"Maximum number = "<<max(x,y,z);
    return 0;
}