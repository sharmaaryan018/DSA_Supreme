#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data=data;
        this->left= NULL;
        this->right= NULL;
    }
};

int findPosition(int arr[], int n, int element) {
    for(int i=0;i<n;i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

//build tree from inorder and preorder traversal
Node* buildTreeFromPreOrderInOrder(int inorder[],int preorder[], int size, int &preIndex, int inorderStart, int inorderEnd) {
    //base case
    if(preIndex >= size || inorderStart>inorderEnd) {
        return NULL;
    }

    //step A:
    int element = preorder[preIndex++];
    Node* root = new Node(element);
    int pos = findPosition(inorder,size,element); 

    //step B:
    root->left = buildTreeFromPreOrderInOrder(inorder,preorder,size,preIndex,inorderStart,pos-1);

    //step C:
    root->right = buildTreeFromPreOrderInOrder(inorder,preorder,size,preIndex,pos+1,inorderEnd); 

    return root;
}

Node* buildTreeFromPostOrderInOrder(int inorder[],int postorder[],  int &postIndex,int size, int inorderStart, int inorderEnd,unordered_map<int,int>&mapping) {
    //base case
    if(postorder<0 || inorderStart>inorderEnd) {
        return NULL;
    }

    int element = postorder[postIndex];
    postIndex--;
    Node * root= new Node(element);

   // int pos = findPosition(inorder,size,element);
   int pos = mapping[element]; 

    //root->right solve

      root->right = buildTreeFromPostOrderInOrder(inorder,postorder,postIndex, size,pos+1,inorderEnd,mapping); 

      //root->left solve
        root->left = buildTreeFromPostOrderInOrder(inorder,postorder,postIndex,size,inorderStart,pos-1,mapping); 

        return root;

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

void createMapping(unordered_map<int,int>&mapping,int inorder[],int n) {

    for(int i=0;i<n;i++) {
        mapping[inorder[i]]=i;
    }
}



int main() { 

    // int inorder[] = {40,20,50,10,60,30,70};
    // int preorder[] = {10,20,40,50,30,60,70};
    // int size=7;
    // int preIndex =0;
    // int inorderStart=0;
    // int inorderEnd= size-1;

    // cout<<"building tree " <<endl;

    // Node* root = buildTreeFromPreOrderInOrder(inorder,preorder,size,preIndex,inorderStart, inorderEnd);

    // cout<<"printing level order traversal : "<<endl;
    // levelOrderTraversal(root);

    int inorder[] = {40,20,10,50,30,60};
    int postorder[] = {40,20,50,60,30,10};
    int size =6;
    int postIndex= size-1;
    int inorderStart= 0;
    int inorderEnd = size -1;

    unordered_map<int,int>mapping;
    createMapping(mapping,inorder,size);

    cout << "Building the tree"<<endl;
    Node* root = buildTreeFromPostOrderInOrder(inorder,postorder,postIndex,size,inorderStart,inorderEnd,mapping);
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root); 


}