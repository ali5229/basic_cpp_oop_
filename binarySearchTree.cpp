#include<iostream>
using namespace std;
 struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val): data(val),left(NULL),right(NULL){}
 }
 Node* insert(Node* root, int key){
    if(root==NULL) {
        return new Node(key);
    }
    if(key<root->data){
        root->left = insert(root->left, key);
    }
    if(key>root->data){
        root->right = insert(root->right, key);
    }
    return root;
 }

 void preorder(Node* root){
    if(!root) return;
    cout<<root->data;
 }

 int main(){
    Node* root = NULL;
    root = insert(root,300);
    root = insert(root,400);
    root = insert(root,200);
    root = insert(root,1200);
    root = insert(root,3560);
    root = insert(root,30);

    cout<<"The preorder is ";
    preorder(root);
    cout<<"The in-order is ";
    inorder(root);
    cout<<"The post order is ";
    postorder(root);
    return 0;
 }