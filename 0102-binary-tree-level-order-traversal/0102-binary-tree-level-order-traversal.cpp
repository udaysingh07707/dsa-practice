
class Solution {
public:
    int lvl(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(lvl(root->left),lvl(root->right));
    }
    void printnthlvl(TreeNode* root,int lvl,int level,vector<int>&k){
        if(root == NULL) return;
        if(lvl == level) k.push_back(root->val);
        printnthlvl(root->left,lvl,level+1,k);
        printnthlvl(root->right,lvl,level+1,k);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        int n = lvl(root);
        for(int i = 1;i<=n;i++){
            vector<int> k;
            printnthlvl(root,i,1,k);
            v.push_back(k);
        }
        return v;
    }
};