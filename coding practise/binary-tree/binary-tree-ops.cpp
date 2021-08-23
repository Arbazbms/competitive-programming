#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node* root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void postorder(Node* root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
int maxDepth(Node* root){
    if(root==NULL)
        return 0;
    else{
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);

        if(lDepth>rDepth)
            return lDepth+1;
        else    
            return rDepth+1;
    }
}
int main(){

   #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    struct Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(6);
    root->right->left = new Node(12);
    root->right->right = new Node(17);
        //NOTE: Binary tree representation for above
        //         10
        //     /      \
        //    5        15
        //   /  \     /  \
        //  3    6   12   17  
    cout<<"preorder traversal: "<<endl;
    preorder(root);

    cout<<"\ninorder traversal: "<<endl;
    inorder(root);

    cout<<"\npostorder traversal: "<<endl;
    postorder(root);

    cout<<"\nHeight of Tree is: " << maxDepth(root);

    return 0;
}