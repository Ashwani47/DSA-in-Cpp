class Solution {
  private:
    bool knows(vector<vector<int>>& mat, int a, int b, int n){
        
    }
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n =  mat.size();
        stack<int> st;
        for(int i = 0; i < n; i++){
            st.push(i);
        }
        while(st.size() != 1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            
            if(mat[a][b] == 1) st.push(b);
            else st.push(a);
        }
        
        int candidate = st.top();
        
        bool rowCheck = true;
        for(int i = 0; i < n; i++){
            if(mat[candidate][i] != 0){
                if(candidate != i) rowCheck = false;
            }
        }
        bool colCheck = true;
        for(int i = 0; i < n; i++){
            if(mat[i][candidate] != 1){
                colCheck = false;
            }
        }
        
        if(rowCheck && colCheck) return candidate;
        else return -1;
        
    }
};