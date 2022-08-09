#include<iostream>
using namespace std;

//here we need to maintain parent pointer for link 
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

Node *insert(Node *root, int x){
    Node *temp=new Node(x);
    Node *parent=NULL, *curr=root;
    while (curr!=NULL)
    {
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL) // parent is null when root is empty its means current is empty 
        return temp;  //this condition is execute if and only if root is empty

    if(parent->key>x)  //this condition is execute when while loop is execute at least one time
        parent->left=temp;  // that means root is not empty
    else
        parent->right=temp;

    return root;
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int main(){
    Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);

    int x=20;
    root=insert(root,x);
    inorder(root);

}