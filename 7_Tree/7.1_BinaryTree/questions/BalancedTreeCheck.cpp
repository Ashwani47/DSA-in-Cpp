// // Approach 1 :- but in o(n^2) time complexity

// class Solution {
//   public:
//     int height(Node* root){
//         if(root == nullptr) return 0;
//         int left = height(root -> left);
//         int right = height(root -> right);
//         return max(left, right) + 1;
//     }
//     bool isBalanced(Node* root) {
//         if(root == nullptr) return true;
        
//         bool left = isBalanced(root -> left);
//         bool right = isBalanced(root -> right);
//         bool diff = abs(height(root -> left) - height(root -> right)) <= 1;
        
//         return left && right && diff;
        
//     }
// };

// Approach 2 :- but in o(n) time complexity

class Solution {
  public:
  
    pair<bool,int> isBalancedFast(Node* root){
        if(root == nullptr) return make_pair(true, 0);
        
         pair<bool,int> left = isBalancedFast(root -> left);
         pair<bool,int> right = isBalancedFast(root -> right);
        
        bool l = left.first;
        bool r = right.first;
        bool diff = abs(left.second - right.second) <= 1;
        
        pair<bool,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        ans.first = l && r && diff;
        return ans;
    }
    bool isBalanced(Node* root) {
        return isBalancedFast(root).first;
    }
};