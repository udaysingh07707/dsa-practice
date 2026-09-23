/**
val;
left;
right;
 */
class Solution {
public:
    // int lvl(TreeNode* root){
    //     if(root == NULL) return 0;
    //     return 1 + max(lvl(root->left) , lvl(root->right));
    // }
    // void helper(TreeNode* root,int &dia){
    //     if(root == NULL) return;
    //     int d = lvl(root->left) + lvl(root->right);
    //     dia = max(dia,d);
    //     helper(root->left,dia);
    //     helper(root->right,dia);
    // }
    int depth(TreeNode* root,int &dia){
        if(root==NULL) return 0;
        int leftdepth = depth(root->left,dia);
        int rightdepth = depth(root->right,dia);
        dia = max(dia,leftdepth+rightdepth);
        return 1+max(leftdepth,rightdepth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        // helper(root,dia);
        depth(root,dia);
        return dia;

    }
};