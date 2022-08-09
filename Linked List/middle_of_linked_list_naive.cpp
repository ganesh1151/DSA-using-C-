// This is an important interview problem where one needs 
//to find the middle of a linked list of a given linked list.

//if there are even elemnt then then print second middle element
//and if odd print middle element
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

void printMiddle(Node *head)
{
    if(head==NULL)
        return;
    int count=0;
    Node *curr;
    for(curr=head;curr!=NULL;curr=curr->next)
        count++;
    curr=head;
    for(int i=0;i<count/2;i++)
        curr=curr->next;
    cout<<curr->data;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printList(head);
	cout<<"Middle of Linked List: ";
	printMiddle(head);
	return 0;
} 
