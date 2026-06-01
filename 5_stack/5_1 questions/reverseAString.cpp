class Solution {
  public:
    string reverse(const string& S) {
        
        stack<char> st;
        for(int i = 0 ; i < S.length(); i++){
            st.push(S[i]);
        }
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};