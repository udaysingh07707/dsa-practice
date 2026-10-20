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
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int start,int end,int &pstidx){
        if(start>end) return NULL;
        int rootval = postorder[pstidx];
        pstidx--;
        TreeNode* root = new TreeNode(rootval);
        int mid = start;
        while(inorder[mid]!=rootval) mid++;
        root->right =  helper(inorder,postorder,mid+1,end,pstidx);
        root->left = helper(inorder,postorder,start,mid-1,pstidx);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int pstidx = postorder.size() - 1;
        return helper(inorder,postorder,0,inorder.size()-1,pstidx);
    }
};