#include <iostream>
#include<stack>
using namespace std;
//A O(h) extra space and O(n) time solution
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

void iterativePreoder(Node *root)
{
    if(root==NULL) return;
    stack<Node *> s;
    Node *curr=root;
    while(curr!=NULL || s.empty()==false)
    {
        while (curr!=NULL)
        {
            cout<<curr->key<<" ";
            if(curr->right!=NULL)
                s.push(curr->right);
            curr=curr->left;
        }

        if(s.empty()==false)
        {
            curr=s.top();
            s.pop();
        }
        
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