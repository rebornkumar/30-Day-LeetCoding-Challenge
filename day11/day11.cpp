class Solution {
    int ans = 0;
    int helper(TreeNode root) {
        if(root == null) return 0;
        
        int hL = helper(root.left);
        int hR = helper(root.right);
        
        ans = Math.max(ans,hL+hR);
        return 1 + Math.max(hL,hR);
    }
    public int diameterOfBinaryTree(TreeNode root) {
        if(root == null)
            return 0;
        int height = helper(root);
        return ans;
    }
}