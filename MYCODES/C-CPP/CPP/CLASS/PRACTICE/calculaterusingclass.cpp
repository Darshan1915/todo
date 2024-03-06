#include <iostream>
using namespace std;

class calculaterusingclass
{
    public:
    int x,y,ch;
    void input()
    {
        cout<<"Enter your numbers: ";
        cin>>x>>y;
        cout<<"Enter your choice: \n1.add \n2.substract\n";
        cin>>ch;
    }
    void display()
    {
        switch (ch)
        {
            case 1:
            {
                cout<<"Addition is: "<<x+y;
                break;
            }
            case 2:
            {
                cout<<"Substraction is is: "<<x-y;
            }
        }    
    }

};
int main()
{
    calculaterusingclass result;
    result.input();
    result.display();

    return 0;
}