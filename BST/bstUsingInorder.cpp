#include<iostream>
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
        }
        //stepD
        if(temp->left) {
            q.push(temp->left);
        }
         if(temp->right) {
            q.push(temp->right);
        }
    }

}


Node* bstUsingInorder(int inorder[], int s, int e) {
//base case
     if(s>e) {
        return NULL;
     }

     int mid = (s+e)/2;
     int element = inorder[mid];
     Node* root = new Node(element);
     root->left= bstUsingInorder(inorder,  s, mid-1);
     root->right = bstUsingInorder(inorder, mid+1, e);

     return root;


}
int main() {
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int s =0;
    int e =8;
    Node* root = bstUsingInorder(inorder, s, e);
    levelOrderTraversal(root);
}
    

