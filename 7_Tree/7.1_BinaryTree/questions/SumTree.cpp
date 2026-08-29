
class Solution {
  public:
    pair<bool,int> isSumTreeFast(Node* node){
        if(node == nullptr) return make_pair(true, 0);
        if(node->left == nullptr && node->right == nullptr)
            return make_pair(true, node->data);

        pair<bool,int> left = isSumTreeFast(node->left);
        pair<bool,int> right = isSumTreeFast(node->right);

        bool comp = left.second + right.second == node->data;

        pair<bool,int> ans;
        ans.first = left.first && right.first && comp;
        ans.second = 2*node->data;

        return ans;
    }

    bool isSumTree(Node* node) {
        return isSumTreeFast(node).first;
    }
};