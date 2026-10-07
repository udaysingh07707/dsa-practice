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
    int lvl(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(lvl(root->left),lvl(root->right));
    }
    void getnthlvl(TreeNode* root,int level,int lvl,vector<int> &v){
        if(root==nullptr) return;
        if(level == lvl) v.push_back(root->val);
        getnthlvl(root->left,level,lvl+1,v);
        getnthlvl(root->right,level,lvl+1,v);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> v;
        int n = lvl(root);
        for(int i = 1;i<=n;i++){
            vector<int> k;
            getnthlvl(root,i,1,k);
            v.push_back(k);

        }
        return v;
    }
};