 #include<iostream>
#include<queue>
#include<map>
#include<vector>
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

void printTopView(Node* root) {
    if(root == NULL)
    return;
    // CREATE MAP TO STORE HORIZONTAL DISTANCE CORRESPONDING TO ITS NODE
    map<int,int> topNode;

    //Level Order
    //We Will store a pair consisting of Node and Horizontal distance
    queue<pair<Node*, int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        //Check for HORIZONTAL DISTANCE If already exists or not

        if(topNode.find(hd) == topNode.end()) {
            //IF NOT CREATE ENTRY
            topNode[hd]=frontNode->data;
        }

        if(frontNode->left) 
            q.push(make_pair(frontNode->left,hd-1));
        if(frontNode->right)
            q.push(make_pair(frontNode->right,hd+1));
    }
    //NOW THE ANSWER IS STORED IN THE MAP
    cout<<"printing the answer: "<<endl;

    for(auto i: topNode) {
        cout<<i.first<<"->"<<i.second<<endl;
    }
}

void printRightView(Node *root, vector<int> &ans, int level) {
    //base case
    if(root == NULL)
    return;

    if(level == ans.size()) {
        ans.push_back(root->data);
    }
    //left
    printRightView(root->right,ans,level+1);
    //right
     printRightView(root->left,ans,level+1);
}

int main() {
    Node* root = buildTree();
    vector<int> ans;
    int level=0;
    printRightView(root,ans,level);

    cout<<"Printing the Right View Answer"<<endl;

    for(auto i: ans) {
        cout<< i <<" ";
    }
    return 0;
}