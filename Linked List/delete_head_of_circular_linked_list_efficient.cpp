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
    if(head==NULL)
        return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}

Node *delHead(Node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }

    head->data=head->next->data;
    Node  *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=head;
	printList(head);

	head=delHead(head);
	printList(head);
	return 0;
} 

