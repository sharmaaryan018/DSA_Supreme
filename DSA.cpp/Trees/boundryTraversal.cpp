
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


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
void printLeftBoundry(Node* root) {
    //base case
    if(root == NULL)
    return;
    if(root->left==NULL && root->right==NULL)
    return;
    cout<<root->data<<" ";
    if(root->left) {
        printLeftBoundry(root->left);
    }
    else {
    printLeftBoundry(root->right);
    }
}

void printLeafBoundry(Node* root) {
    //base case
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL) {
        cout<< root->data<< " ";
    }
    printLeafBoundry(root->left);
    printLeafBoundry(root->right);
}

void printRightBoundry(Node* root) {
    //base case 
    if(root==NULL) {
        return;
    }
    if(root->left == NULL && root->right == NULL)
    return;

    if(root->right) {*
    printRightBoundry(root->right);
    }
    else {
    printRightBoundry(root->left);
    }
    cout<< root->data <<" ";
}

void boundryTraversal(Node* root) {
    if(root == NULL)
    return;

    cout<< root->data<<" ";
    //A
    printLeftBoundry(root->left);
    //B
    printLeafBoundry(root);
    //C
    printRightBoundry(root->right);
}

int main() {
    Node * root = buildTree();
    boundryTraversal(root);
    return 0;
}