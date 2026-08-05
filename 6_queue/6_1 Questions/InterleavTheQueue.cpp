class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        queue<int> Q;
        int n = q.size();
        for(int i = 0; i < n/2; i++){
            int val = q.front();
            q.pop();
            Q.push(val);
        }
        while(!Q.empty()){
            int val = Q.front();
            Q.pop();
            q.push(val);
            val = q.front();
            q.pop();
            q.push(val);
        }
        
    }
};