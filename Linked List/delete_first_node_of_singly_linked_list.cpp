// time complexity of delHead funciton is o(1)

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next=NULL;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node *delHead(Node *head)
{
    if(head==NULL)
        return NULL;    
    else
    {
        Node *temp=head->next;
        delete(head);
        return temp;
    }

}

void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printList(head);
    head=delHead(head);
    printList(head);

    return 0;
}