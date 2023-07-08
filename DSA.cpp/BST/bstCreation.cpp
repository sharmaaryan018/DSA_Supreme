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
        this->left= NULL;
        this->right= NULL;
    }
}; 



Node* insertIntoBST(Node* root, int data) {
    if(root == NULL) {
        //this is the first node we have to create
        root= new Node(data);
        return root;
    }
    // not the first node

    if(root->data > data) {
        //insert to left
        root->left=insertIntoBST(root->left,data);
    }
    else { 
        //insert to right
          root->right=insertIntoBST(root->right,data);
    } 
    return root;
}

void takeInput(Node* &root) {
    int data;
    cin>>data;

    while(data!=-1) {
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(Node *root) {
    queue<Node*> q;
    //INITIALLY PUSH ROOT NODE
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        //stepA
        Node* temp=q.front();
        //stepB
         q.pop();
        if(temp==NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            } 
        }
        else {
            cout<<temp->data<<" ";
        
        //stepD
        if(temp->left) {
            q.push(temp->left);
        }
         if(temp->right) {
            q.push(temp->right);
        }
        }
    }

}

void preOrderTraversal(Node* root) {
    //NLR 
    if(root==NULL) {
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    }

    
void inOrderTraversal(Node* root) {
    //LNR 
    if(root==NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    
    inOrderTraversal(root->right);
    }

    
void postOrderTraversal(Node* root) {
    //NLR 
    if(root==NULL) {
        return;
    }
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
    }

int main() {
    Node* root = NULL;
    cout<<"Enter the data for Node" <<endl;
    takeInput(root);
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);
    cout<<"Printing inorder: "<<endl;
    inOrderTraversal(root); 
    cout<<endl;
     cout<<"Printing preorder: "<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Printing postorder: "<<endl;
    postOrderTraversal(root);
    cout<<endl;
    return 0;
}