// // Approach 1 : - But in O(n^2) time complexity
// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root == nullptr) return 0;
//         int left = height(root -> left);
//         int right = height(root -> right);
//         return max(left, right) + 1;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root == nullptr) return 0;
//         int ans1 = diameterOfBinaryTree(root -> left);
//         int ans2 = diameterOfBinaryTree(root -> right);
//         int ans3 = height(root -> left) + height(root -> right) ;
//         int temp = max(ans1, ans2);
//         return max(temp, ans3);
//     }
// };

// Approach 2 : - In O(n) time complexity :- concept is to return both diameter and height simultaneously

class Solution {
public:

    pair<int, int> diameterFast(TreeNode* root) {
        if (root == nullptr) {
            return make_pair(0, 0);
        }
        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int> ans = diameterFast(root);

        return ans.first;
    }
};