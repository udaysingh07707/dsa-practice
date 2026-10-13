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
    
    vector<int> rightSideView(TreeNode* root) {
      if(root == nullptr) return {};
      vector<int> v;
      queue<TreeNode*> q;
      q.push(root);
      int l = 0;
      while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
          TreeNode* cur = q.front();
          q.pop();
          if(i == s-1){
          v.push_back(cur->val);
          }
          if(cur->left) q.push(cur->left);
          if(cur->right) q.push(cur->right);

        }
        l++;
      }

        return v;

    }
};