class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<Node*> q;
        q.push(root);
        
        bool ltr = true;
        
        while(!q.empty()){
            int size = q.size();
            vector<int> temp(size);
            for(int i = 0; i < size; i++){
                Node* frontNode = q.front();
                q.pop();
                
                int index = ltr ? i : size- i - 1;
                temp[index] = frontNode -> data;
                
                if(frontNode -> left) q.push(frontNode -> left);
                if(frontNode -> right) q.push(frontNode -> right);
                
            }
            ltr = !ltr;
            
            for(auto it : temp){
                ans.push_back(it);
            }
            
        }
    }
};