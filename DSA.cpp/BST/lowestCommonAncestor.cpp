
class Solution{
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base case
        if(root==NULL)
        return NULL;

        if(p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left,p,q);
        }

       else  if(p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right,p,q);
        }
        
         else   if(p->val < root->val && q->val > root->val) {
            return root;
        }
         else  if(q->val < root->val && p->val > root->val) {
            return root;
        }
        return root;
    }
};