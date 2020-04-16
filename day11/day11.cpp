/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int ans = 0;
    int height(TreeNode* root) {
        if(root == NULL) return 0;
        return 1 + max(height(root->left),height(root->right));
    }
    void myFun(TreeNode* root) {
        if(root == NULL) return;
        
        int hL = height(root->left);
        int hR = height(root->right);
        ans = max(ans,hL+hR+1);
        myFun(root->left);
        myFun(root->right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0;
        if(root == NULL) return 0;
        myFun(root);
        return ans-1;
    }
};