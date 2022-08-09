//the idea is changing the link rather than data

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

Node *reverse(Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printList(head);
	head=reverse(head);
	printList(head);
	return 0;
} 
