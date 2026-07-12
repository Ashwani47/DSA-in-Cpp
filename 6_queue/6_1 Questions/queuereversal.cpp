// // Apporach 1

// class Solution {
// 	public:
// 	void reverseQueue(queue<int> &q) {
// 		// code here
// 		stack<int> s;
// 		while (!q.empty()) {
// 		    int temp = q.front();
// 		    q.pop();
// 		    s.push(temp);
		    
// 		}
// 		while (!s.empty()) {
// 		    int temp = s.top();
// 		    s.pop();
// 		    q.push(temp); 
		    
// 		}
// 	}
// };


// // Approach 2

// class Solution {
//   public:
//     void reverseQueue(queue<int> &q) {
//         if(q.empty()) return;
//         int temp = q.front();
//         q.pop();
//         reverseQueue(q);
//         q.push(temp);
        
//     }
// };