// fast_p will enter into the loop before (or at the same time as slow_p)
//let fast_p be k distance ahead of slow_p when slow_p enter the loops where k>=0
//this distance keeps on increasing by one in every movement of both pointers
//when distance become lenght of cycle , they meet


#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

bool isLoop(Node* head)
{
    Node *slow_p=head, *fast_p=head;
    while(fast_p!=NULL && fast_p->next!=NULL){
        slow_p=slow_p->next;
        fast_p=fast_p->next->next;
        if(slow_p==fast_p)
        {
            return true;
        }
    }

    return false;
}

int main(){
    Node *head=new Node(15);
    head->next=new Node(10);
    head->next->next=new Node(12);
    head->next->next->next=new Node(20);
    head->next->next->next->next=head->next;
    if(isLoop(head))
        cout<<"Loop found";
    else
        cout<<"No Loop";

    return 0;
}

