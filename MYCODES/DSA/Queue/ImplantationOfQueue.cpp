#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int capacity;
    int qfront;
    int rear;

    public:
    Queue( int x){
        capacity = x;
        arr = new int[capacity];
        qfront=0;
        rear=-1;
    }
    void push( int data )
    {
        if(rear==(capacity -1))
        {
            cout<<"Queue is  full "<<endl;
        }
        else
        {
            qfront=0;
            rear++;
            arr[rear]=data;
            
        }
    }
    
    void pop(){
        if(rear == -1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            qfront++;
        }
    }

    void Display(){
        if(rear == -1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            for( int i= qfront; i<=rear; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }

};

int main()
{
    Queue q(10);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // q.Display();

    q.pop();
    q.Display();

    return 0;
}