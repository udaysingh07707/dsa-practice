/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool findsum(TreeNode* root,int s, int t){
        if(root==NULL) return false;
        s = s+root->val;
        if((root->left == NULL && root->right == NULL) && (s == t)) return true;
       bool l =  findsum(root->left,s,t); 
       bool r =  findsum(root->right,s,t);
        if(l||r) return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
      bool f =  findsum(root,0,targetSum);
      return f;
       
    }
};