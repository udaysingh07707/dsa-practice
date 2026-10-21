/**
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;
        TreeNode* lefttree = lowestCommonAncestor(root->left,p,q);
        TreeNode*  righttree = lowestCommonAncestor(root->right,p,q);
        if(lefttree != NULL && righttree!=NULL) return root;  
        if(lefttree!=NULL) return lefttree;
        if(righttree!=NULL) return righttree;
        return NULL;
    }
};
