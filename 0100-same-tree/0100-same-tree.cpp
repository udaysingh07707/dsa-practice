/**
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL && q!=NULL) return false;
        if(p != NULL && q== NULL) return false;

        if(p->val!=q->val) return false;

        bool lefttree  = isSameTree(p->left,q->left);

        if(lefttree == false) return false;

        bool righttree = isSameTree(p->right,q->right);

        if(righttree == false) return false;
         
         return true;
    }
};