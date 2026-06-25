class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int ans = q.back();
        int n = q.size() -1;
        for (int i = 0; i < n; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        q.pop();
        return ans;
    }
    
    int top() {
        if(q.empty()) return -1;
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */