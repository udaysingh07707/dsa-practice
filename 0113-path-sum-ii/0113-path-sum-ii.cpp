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
    void getpath(TreeNode* root,vector<vector<int>> &v, vector<int> path,int s,int t){
        if(root == NULL) return;
        path.push_back(root->val);
        s = s+root->val;
        if( (root->left == NULL && root->right==NULL) && (s == t)) v.push_back(path);
        getpath(root->left,v,path,s,t);
        getpath(root->right,v,path,s,t);
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        vector<int> path;
         getpath(root,v,path,0,targetSum); 
       return v;
    }
};