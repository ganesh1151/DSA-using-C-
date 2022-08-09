//it required two traversal
//auxiliary space O(n)

#include<iostream>
#include<vector>
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

Node *revList(Node *head)
{
    vector<int> arr;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
        arr.push_back(curr->data);

    for(Node *curr=head;curr!=NULL;curr=curr->next)
    {
        curr->data=arr.back();
        arr.pop_back();
    }

    return head;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printList(head);
    head=revList(head);
    printList(head);

    return 0;
}