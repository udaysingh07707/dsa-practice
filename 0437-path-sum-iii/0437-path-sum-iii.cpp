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
    void helper(TreeNode* root,long long s, int t,int &path){
        if(root == NULL) return;
        s += root->val;
        if(s == t){
        path++;
        } 
        helper(root->left,s,t,path);
        helper(root->right,s,t,path);

    }
    void getpath(TreeNode* root, int t,int &path){
        if(root == NULL) return;
        helper(root,0,t,path);
        getpath(root->left,t,path);
        getpath(root->right,t,path);

    }
    int pathSum(TreeNode* root, int targetSum) {
        int path = 0;
        getpath(root,targetSum,path);
        return path;
    }
};