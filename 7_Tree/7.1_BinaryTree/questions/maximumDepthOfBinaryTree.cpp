class Solution {
public:
    int solve(TreeNode* root, int h){
        if(root == nullptr) return h;
        h = max(solve(root -> left, h), solve(root -> right, h)) + 1;
        return h;
    }
    int maxDepth(TreeNode* root) {
        int h = 0;
        h = solve(root, h);
        return h;
    }
};