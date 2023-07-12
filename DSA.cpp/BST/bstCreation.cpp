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

//assuming there are only unique values in tree
    Node* findNodeInBST(Node* root, int target) {
// base case
    if(root->data == target)
    return root;

    if(target>root->data) {
        // fing target in right subtree
        return findNodeInBST(root->right, target);
    }
    else {
        return findNodeInBST(root->left, target);
    }

    }

    int minVal(Node* root) {
        Node* temp = root;
        if(temp == NULL) {
           return -1; 
        }

        while(temp->left != NULL) {
            temp = temp ->left;
        }
        return temp->data;
    }

    int maxVal(Node* root) {
        Node* temp = root;
        if(temp == NULL) {
           return -1; 
        }

        while(temp->right != NULL) {
            temp = temp ->right;
        }
        return temp->data;
    }

    Node* deleteNodeInBST(Node* root, int target) {
        //base case
        if(root==NULL)
        return root;

        //step 1
        Node* temp = findNodeInBST(root, target);
        // I want to dlete temp
        if(temp->left == NULL && temp->right == NULL) {
            //leaf node
            delete temp;
            return NULL;
        }
        else if(temp->left == NULL && temp->right != NULL) {
            //leaf Node
            Node* child = temp->right;
            delete temp;
            return child;
        }
         else if(temp->left !=NULL && temp->right == NULL) {
            //leaf Node
            Node* child = temp->left;
            delete temp;
            return child;
        }
        else {
            //dono child exist krte hai
             // inorder predecessor of left subtree -> left subtree of max value
             int inorderPre= maxVal(temp->left);
             temp->data=inorderPre;
              temp->left = deleteNodeInBST(temp->left,inorderPre);
             return root;
        }
    }

int main() {
    Node* root = NULL;
    cout<<"Enter the data for Node" <<endl;
    takeInput(root);
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);
    // cout<<"Printing inorder: "<<endl;
    // inOrderTraversal(root); 
    // cout<<endl;
    //  cout<<"Printing preorder: "<<endl;
    // preOrderTraversal(root);
    // cout<<endl;
    // cout<<"Printing postorder: "<<endl;
    // postOrderTraversal(root);
    // cout<<endl;

    // bool ans = findNodeInBST(root,15);
    // cout<<"present or not : "<<ans<<endl;

    // cout<< endl<<"Minimum value is :: "<<minVal(root)<<endl;

     cout<< endl<<"Maximum value is :: "<<maxVal(root)<<endl; 

     deleteNodeInBST(root,150);
     levelOrderTraversal(root);
    return 0;
}

