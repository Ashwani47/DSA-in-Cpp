class Solution {
  public:
    void solve(Node* root, int len, int &maxLen, int sum, int &maxSum){
        sum = sum + root -> data;
        if(root -> left == nullptr && root -> right == nullptr){
            if(len > maxLen){
                maxLen = len;
                maxSum = sum;
            }
            else if(len == maxLen){
                maxSum = max(sum, maxSum);
            }
        }
        if(root -> left ) solve(root -> left, len+1, maxLen, sum, maxSum);
        if(root -> right) solve(root -> right, len+1, maxLen, sum, maxSum);
    }
    int sumOfLongRootToLeafPath(Node *root) {
        if(root == nullptr) return 0;
        int len = 0;
        int maxLen = 0;
        
        int sum = 0;
        int maxSum = 0;
        
        solve(root, len, maxLen, sum, maxSum);
        
        return maxSum;
    }
};