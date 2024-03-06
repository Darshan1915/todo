#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node( int d )
    {
        data = d;
        next = NULL;
    }
};

class Stack
{
    Node *front = NULL;
    Node *rear = NULL;

    public:
    void Enqueue(int x){
        Node *n = new Node(x);
        
        if( rear == NULL && front == NULL)
        {
            front=n;
            rear=n;
        }
        else{
            rear->next=n;
            rear=n;
        }
    }


    void Dequeue()
    {
        front++;
    }

    void Display()
    {
        Node *temp = front;
        while( temp == rear)
        {
            cout<<temp->data<<" ";
            temp = temp ->next;
        }
    }

};

int main()
{
    Stack S;

    S.Enqueue(2);
    S.Enqueue(3);
    S.Enqueue(4);
    S.Enqueue(5);

    S.Display();

    //S.Dequeue();
   

    return 0;
}