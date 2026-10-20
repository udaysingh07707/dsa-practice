/**
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 */
class Solution {
public:
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int start,int end,int &preidx){
        if(start>end) return nullptr;
        int rootval = preorder[preidx];
        preidx++;
        TreeNode* root = new TreeNode(rootval);
        int mid = start;
        while(inorder[mid]!=rootval){
            mid++;
        }
        root->left = helper(preorder,inorder,start,mid-1,preidx);
        root->right = helper(preorder,inorder,mid+1,end,preidx);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx = 0;
        return helper(preorder,inorder,0,inorder.size()-1,preidx);
    }
};