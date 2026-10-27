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
    void insertinbst(TreeNode* root,TreeNode* el){
        if(root == NULL) return;
        if(el->val < root->val ){
            if(root->left == NULL) root->left = el;
            else insertinbst(root->left,el);
        }else{
            if(root->right == NULL) root->right = el;
            else insertinbst(root->right,el);
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        int n = preorder.size();
        for(int i = 1;i<n;i++){
            TreeNode* newnode  = new TreeNode(preorder[i]);
            insertinbst(root,newnode); 
        }
        return root;
    }
};