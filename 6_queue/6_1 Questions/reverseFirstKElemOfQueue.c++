class Solution {
public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        int n = q.size();

        if (k <= 0 || k > n)
            return q;

        stack<int> s;
        for (int i = 0; i < k; i++) {
            s.push(q.front());
            q.pop();
        }
        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }
        for (int i = 0; i < n - k; i++) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};