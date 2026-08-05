class Solution {
public:
    string firstNonRepeating(string &s) {
        unordered_map<char, int> count;
        queue<char> q;
        string ans;

        for (char ch : s) {
            count[ch]++;
            q.push(ch);

            while (!q.empty() && count[q.front()] > 1) {
                q.pop();
            }

            if (!q.empty())
                ans.push_back(q.front());
            else
                ans.push_back('#');
        }

        return ans;
    }
};