//time complexity of o(n) auxiliary space theta(n)

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

int search(Node *head, int x)
{
    int pos=1;
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==x)
            return pos;
        else
        {
            pos++;
            curr=curr->next;
        }
    }
    return -1;
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
    cout<<"Position of element 20 in linked list "<<search(head,20);
    return 0;
}