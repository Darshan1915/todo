#include <iostream>
using namespace std;

class Stack{
    int capacity;
    int *arr;
    int top;

    public:

    Stack( int x){
        capacity = x;
        arr = new int[capacity];
        top = -1;
    }

    void push( int data)
    {
        if( top == (capacity-1))
        {
            cout<<"Stack is  full "<<endl;
        }
        else{
            top++;
            arr[top]=data;
        }
    }

    void pop(){
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        top--;
    }

    void Display(){
        int n= top;
        for(int i=n; i>=0; i--)
        {
            cout<<arr[i]<<"|";
        }
    }

    bool IsEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    bool IsFull()
    {
        if(top==(capacity-1))
        {
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{
    Stack S(10);
    S.push(1);
    S.push(2);
    S.push(3);

    S.Display();

    S.pop();
    S.Display();

    return 0;
}