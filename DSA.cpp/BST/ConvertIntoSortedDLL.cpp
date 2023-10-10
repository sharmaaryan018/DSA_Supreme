void convertIntoSortedDLL(Node* root,Node* head){
//basecase
    if(root==NULL) {
        return;
    }

    //right subtree into LL
    convertIntoSortedDLL(root->right,head);

    //attach root node
    root->right=Head;

    if(head!=NULL)
    head->left = root;

    //update head
    head = root;

    //left subtree linked list
    convertIntoSortedDLL(root->left, head);
}

void printLinkedList(Node* head) {
    Node* temp= head;
    cout<<endl;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp= temp->right;
    }
    cout<<endl;
}

int main() {
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int s =0;
    int e =8;
    Node* root = bstUsingInorder(inorder, s, e);
    levelOrderTraversal(root);
     
     cout<<"printing sorted linked list:" <<endl;
    Node* head = NULL;
    convertIntoSortedDLL(root, head);
    printLinkedList(head);
}
   