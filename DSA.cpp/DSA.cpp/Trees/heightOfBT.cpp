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

/*void levelOrderTraversal(Node *root) {
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
        }
       
        cout<<temp->data<<" ";
        //stepD
        if(temp->left) {
            q.push(temp->left);
        }
         if(temp->right) {
            q.push(temp->right);
        }
    }

}*/

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftHeight= height(root->left);
    int rightHeight=height(root->right);
    int ans = max(leftHeight,rightHeight)+1;
}

int diameterOfBinaryTree(TreeNode* root) {
    if(root == NULL)
    return 0;

    int op1 = diameterOfBinaryTree(root->left);
     int op2 = diameterOfBinaryTree(root->right);
    int op3 =height(root->left)+1+max(root->right);

    int ans=max(op1,op2,op3);
    return ans;
}

int main() {

    Node* root = NULL;

    root= buildTree();
    //levelOrderTraversal(root);

    cout<<"Height-> "<<height(root)<<endl;
    return 0;
}