// 1) create an empty hash set hs
// 2) traverse the first list and put all of its node into the hs
// 3) travese the second list and look for every node in hs. as soon 
//    as we find a node print in hs, we return value of it

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
    }
};

int getIntersection(Node* head1, Node* head2)
{
    unordered_set<Node*> s;
    Node* curr=head1;
    while(curr!=NULL)
    {
        s.insert(curr);
        curr=curr->next;
    }
    curr=head2;
    while(curr!=NULL){
        if(s.find(curr)!=s.end())
            return curr->data;
        curr=curr->next;
    }

    return -1;
}

int main()
{
    /* 
    creation of two linked lists
    1st 3->6->9->15->30
    2nd 10->15->30

    */

   Node* newNode;
   Node* head1=new Node(10);
   Node* head2=new Node(3);

   newNode=new Node(6);
   head2->next=newNode;

   newNode=new Node(9);
   head2->next->next=newNode;

   newNode=new Node(15);
   head1->next=newNode;
   head2->next->next->next=newNode;

   newNode=new Node(30);
   head1->next->next=newNode;
   

   head1->next->next->next=NULL;

   cout<<getIntersection(head1,head2);
}

