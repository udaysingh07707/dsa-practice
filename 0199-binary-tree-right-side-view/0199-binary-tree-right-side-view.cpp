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
        return  1 + max(lvl(root->left),lvl(root->right));
    }
    vector<int> rightSideView(TreeNode* root) {
      if(root == nullptr) return {};
      int n  = lvl(root);  
      vector<int> v(n);
      queue<TreeNode*> q;
      q.push(root);
      int l = 0;
      while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
          TreeNode* cur = q.front();
          q.pop();
          v[l] = cur->val;
          if(cur->left) q.push(cur->left);
          if(cur->right) q.push(cur->right);

        }
        l++;
      }

        return v;

    }
};