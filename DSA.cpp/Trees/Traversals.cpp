#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree() {
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    if(data==-1) {
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

// // //void levelOrderTraversal(Node *root) {
// //     queue<Node*> q;
// //     //INITIALLY PUSH ROOT NODE
// //     q.push(root);
// //     q.push(NULL);

// //     while(!q.empty()) {
// //         //stepA
// //         Node* temp=q.front();
// //         //stepB
// //          q.pop();
// //         if(temp==NULL) {
// //             cout<<endl;
// //             if(!q.empty()) {
// //                 q.push(NULL);
// //             } 
// //         }
// //         else {
// //             cout<<temp->data<<" ";
// //         }
       
// //         cout<<temp->data<<" ";
// //         //stepD
// //         if(temp->left) {
// //             q.push(temp->left);
// //         }
// //          if(temp->right) {
// //             q.push(temp->right);
// //         }
// //     }

// // }

void inorderTraversal(Node* root) {
//base case
    if(root==NULL) {
        return;
    }
    //LNR
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);

}

void preorderTraversal(Node* root) {
//base case
    if(root==NULL) {
        return;
    }
    //NLR
    cout<<root->data<<" ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);

}

void postorderTraversal(Node* root) {
//base case
    if(root==NULL) {
        return;
    }
    //LRN
   
    inorderTraversal(root->left);
    inorderTraversal(root->right);
     cout<<root->data<<" ";

}

int main() {

    Node* root = NULL;

    root= buildTree();
    levelOrderTraversal(root);

    inorderTraversal(root);
    return 0;
}