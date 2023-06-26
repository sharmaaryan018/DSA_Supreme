#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int) {
        this->data= data;
        left = NULL;
        right = NULL;
    }
};/*
      1
    /  \
   2   3
  /\
 4  5
 k=1
 p=4*/

 Node* buildTree() {
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    if(data==-1)   {
        return NULL;
    }
    //STEPS-> A, B and C.

    Node* root= new Node(data);

    cout<<"Enter the data for left node : "<<data<<endl;
    root->left=buildTree();

    
    cout<<"Enter the data for right node : "<<data<<endl;
    root->right=buildTree();

    return root;
}
bool kthAncestor(Node* root, int k, int p) {

//base case
 if(root == NULL)
 return false ;

 if(root->data==p) {
    return true;
 }

 bool leftAns= kthAncestor(root->left, k, p);
 
 bool rightAns= kthAncestor(root->right, k, p);

 // when coming back 
 //check left and right have answers or not

 if(leftAns||rightAns) 
 k--;

 if(k==0) {
 cout<<"Answer: "<<root->data<<endl;
 k=-1;
 }
return leftAns||rightAns;
 
}


int main() {
    Node* root = NULL;
    root = buildTree();

 
    int k=1;
    int p=4;
   bool found = kthAncestor(root, k, p);
}