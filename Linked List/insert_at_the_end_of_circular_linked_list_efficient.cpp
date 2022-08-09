//time complexity O(1)

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

Node *insertEnd(Node *head, int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        temp->next=temp;
    else{
        temp->next=head->next; //insert temp in between
        head->next=temp;  // head and head->next

        int t=head->data;  //swapping
        head->data=temp->data;
        temp->data=t;
    }
    return temp;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;
	printList(head);

	head=insertEnd(head,15);
	printList(head);
	return 0;
} 
