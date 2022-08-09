#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d)
        {
            data=d;
            next=NULL;
        }
};

int main(){
   Node *l=new Node(10);
   l->next=new Node(20);
   l->next->next=new Node(30);
}
