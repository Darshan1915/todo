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

class LinkList
{
    public:
    Node *head = NULL;
    Node *tail = NULL;

    void add(int x){
        Node *n = new Node(x);
        
        if(head==NULL && tail==NULL)
        {
            head = n;
            tail = n;
        }
        else{
            tail -> next = n;
            tail = n;
        }


    }

    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        
    }

    void addAtBigining( int x){
        Node *n = new Node(x);
        n->next = head;
        head=n;
    }

    void delet(int y)
    {
        Node *temp;
        for(int i = 0; i=(y-1); i++)
        {
            temp=temp->next;
        }
        temp->next = temp->next->next;

    }

};

int main()
{
    LinkList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);
    ll.add(4);
    ll.add(5);

    //ll.delet(2);
    ll.Display();

    return 0;
}