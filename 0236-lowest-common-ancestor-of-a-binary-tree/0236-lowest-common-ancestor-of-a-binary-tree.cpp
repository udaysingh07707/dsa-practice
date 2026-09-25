/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool searchnode(TreeNode* root,TreeNode* p){
                if(root == NULL) return false;
                if(root == p) return true;
                return searchnode(root->left,p) || searchnode(root->right,p);
                
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root == NULL) return NULL;
         if(root == p|| root == q) return root;
       TreeNode* left = lowestCommonAncestor(root->left, p,  q);
       TreeNode* right = lowestCommonAncestor( root->right, p,  q);
       if(left!=NULL  && right!= NULL) return root;
       if(left!=NULL) return left;
       if(right!=NULL) return right;
       return NULL;


    }
};