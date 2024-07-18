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
    int capacity;
    int cursize;
    Node *head = NULL;

    public:
    void push(int x){
        Node *n = new Node(x);
        
        if( cursize==capacity)
        {
            cout<<"Overflow";
        }
        else{
            n ->next =  head;
            head=n;
            cursize++;
        }
    }


    void pop()
    {
        Node *temp = head;
        head = head-> next;
        cout<<"\nPoped element: "<<temp->data;
    }

    void Display()
    {
        Node *temp = head;
        while( temp != 0)
        {
            cout<<temp->data<<"->";
            temp = temp -> next;
        }
        cout<<"NULL";
        
    }

};

int main()
{
    Stack S;

    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);

    S.Display();

    S.pop();
   

    return 0;
}