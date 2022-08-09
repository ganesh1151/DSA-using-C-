//In this method a tail recursive solution is discussed to reverse the linked list. 
//This method simply follows the iterative solution.

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
    while (curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node *recRevL(Node *curr, Node *prev)
{
    if(curr==NULL)
        return prev;
    Node *next=curr->next;
    curr->next=prev;
    return recRevL(next,curr);
    
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printList(head);
	head=recRevL(head,NULL);
	printList(head);
	return 0;
} 
