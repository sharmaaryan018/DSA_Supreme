Node* sortedLinkedlistIntoBST(Node* & head, int n) {
    if(n<=0 || head==NULL)
    return NULL;

    Node* leftSubtree = sortedLinkedlistIntoBST(head,n-1-n/2);

    Node* root = head;
    root->left = leftSubtree;

    head = head->right;

    //solve right part

    root->right = sortedLinkedlistIntoBST(head, n/2);
    return root;
}