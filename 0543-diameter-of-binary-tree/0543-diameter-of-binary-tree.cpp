/**
val;
left;
right;
 */
class Solution {
public:
    int lvl(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(lvl(root->left) , lvl(root->right));
    }
    void helper(TreeNode* root,int &dia){
        if(root == NULL) return;
        int d = lvl(root->left) + lvl(root->right);
        dia = max(dia,d);
        helper(root->left,dia);
        helper(root->right,dia);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        helper(root,dia);
        return dia;

    }
};