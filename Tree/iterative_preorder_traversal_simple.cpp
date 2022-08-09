#include<iostream>
#include<stack>
using namespace std;
//A O(n) extra space and O(n) time solution 
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void iterativePreoder(Node *root){
    if(root==NULL) return;

    stack<Node *>s;
    s.push(root);
    while (s.empty()==false)
    {
        Node *curr=s.top();
        cout<<(curr->key)<<" ";
        s.pop();
        if(curr->right!=NULL)
            s.push(curr->right);
        
        if(curr->left!=NULL)
            s.push(curr->left);
    }
    
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);

    iterativePreoder(root);
}
