#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;

        node(int d){
            this -> data = d;
            this -> left = nullptr;
            this -> right = nullptr;
        }
};

node *buildTree(){
    
        cout << "Enter the data: " << endl;
        int data;
        cin >> data;
    
        if(data == -1){
            return nullptr;
        }
        node *root = new node(data);
    
        cout << "Enter left of " << data << endl;
        root -> left = buildTree();
        cout << "Enter right of " << data << endl;
        root -> right = buildTree();
    
        return root;
}

void levelOrderTraversal(node* root){
    if(root == nullptr)
        return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

// void levelOrderTraversal(node* root) {
//     if (root == nullptr)
//         return;
//     queue<node*> q;
//     q.push(root);
//     q.push(nullptr);
//     while (!q.empty()) {
//         node* temp = q.front();
//         q.pop();
//         if (temp == nullptr) {
//             cout << endl;
//             if (!q.empty())
//                 q.push(nullptr);
//         }
//         else {
//             cout << temp->data << " ";
//             if (temp->left)
//                 q.push(temp->left);
//             if (temp->right)
//                 q.push(temp->right);
//         }
//     }
// }

// inorder traversal
void inorder(node* root){
    if(root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// preorder traversal
void preorder(node* root){
    if(root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// postorder traversal
void postorder(node* root){
    if(root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// creating a tree from level order traversal
node* buildTreeFromLevelOrder() {

    int data;
    cout << "Enter data for root: ";
    cin >> data;

    if (data == -1)
        return nullptr;

    node* root = new node(data);

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {

        node* temp = q.front();
        q.pop();

        // Left child
        int leftData;
        cout << "Enter left of " << temp->data << ": ";
        cin >> leftData;

        if (leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        // Right child
        int rightData;
        cout << "Enter right of " << temp->data << ": ";
        cin >> rightData;

        if (rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    return root;
}

int main(){

    // node *root = buildTree();    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    node *root = buildTreeFromLevelOrder();    // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

    cout << "Level order traversal is: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "Inorder traversal is: " << endl;
    inorder(root);
    cout << endl;

    cout << "Preorder traversal is: " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder traversal is: " << endl;
    postorder(root);
    cout << endl;

    return 0;
}