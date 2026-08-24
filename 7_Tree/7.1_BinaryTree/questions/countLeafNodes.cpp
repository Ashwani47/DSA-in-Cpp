void inorder(BinaryTreeNode<int> *root, int &count) {
    if (root == NULL)
        return;
    inorder(root->left, count); 
    if(root -> left == nullptr && root -> right == nullptr) count++;
    inorder(root->right, count); 
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int ans = 0;
    inorder(root, ans);
    return ans;    
}