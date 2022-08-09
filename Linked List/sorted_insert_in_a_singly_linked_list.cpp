//something is not null 
//if this is null then there will be probelm
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

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

Node *sortedInsert(Node *head, int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        return temp;
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }

    Node *curr=head;
    while(curr->next!=NULL && curr->next->data<x)
        curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    
    return head;
}

int main()
{
    Node *head=NULL;
    head=sortedInsert(head, 50);
    printList(head);
    head=sortedInsert(head,40);
    printList(head);
    head=sortedInsert(head,80);
    printList(head);
    head=sortedInsert(head,60);
    printList(head);
    
    return 0;
}