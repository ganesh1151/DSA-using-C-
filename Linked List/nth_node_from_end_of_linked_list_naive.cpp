//problem on finding the n-th node from the end of a given linked list.

// Method 1(Using length of Linked List)
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

void printNthFromEnd(Node *head, int n)
{
    Node *curr;
    int len=0;
    for(curr=head;curr!=NULL;curr=curr->next)
        len++;
    curr=head;
    for(int i=1;i<len-n+1;i++)
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
	cout<<"Nth node from end of Linked List: ";
	printNthFromEnd(head,2);
	return 0;
} 