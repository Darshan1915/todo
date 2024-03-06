// We can't initialize instance variables directly at the time of their declaration. To initialize instance variables 
// of a class, we use a method called Constructor.

// A Constructor is a unique method whose name is the same as the name of the class inside which it is declared. Inside this method, 
// we initialized the instance variables of the class.

// There are two types of constructors and they are: 
// 1.Default Constructor
// 2.Parameterized Constructor

#include <iostream>
#include <string.h>
using namespace std;
class data
{
    // creating instance variables
  public:
    char name[30];
    int age;

    // Default Constructor
    data()
    {
        strcpy(name, "Thomas");
        age=18;
    }

    // Parameterized Constrcutor
    data(char nm[], int ag)
    {
        strcpy(name, nm);
        age=ag;
    }
};

int main()
{
    // Creating an object x and y of the class data
    data x;
    data y("William", 14);

    // Access the values of instance variables of object x
    cout<<"Name: "<<x.name<<endl;
    cout<<"Age: "<<x.age<<endl;

    // Access the values of instance variables of object y
    cout<<"Name: "<<y.name<<endl;
    cout<<"Age: "<<y.age;

    return 0;
}