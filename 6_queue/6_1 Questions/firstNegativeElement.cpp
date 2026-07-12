// // approach 1 :- brute force
// class Solution {
//   public:
  
//     int neg(vector<int>& arr, int s, int e){
//         int ans = 0;
//         for(int i = s; i < e; i++){
//             if(arr[i] < ans){
//                 ans = arr[i];
//                 break;
//             }
//         }
//         return ans;
//     }
//     vector<int> firstNegInt(vector<int>& arr, int k) {
//         int n = arr.size();
//         vector<int> ans;
//         for(int i = 0; i < n-k+1; i++){
//             int yoo = neg(arr, i, i+k);
//             ans.push_back(yoo);
//         }
//         return ans;
//     }
// };

// // Approach 2:- using queue
// class Solution {
// public:
//     vector<int> firstNegInt(vector<int>& arr, int k) {
//         int n = arr.size();
//         vector<int> ans;
//         queue<int> q;

//         for (int i = 0; i < n; i++) {
//             if (arr[i] < 0) {
//                 q.push(i);
//             }
//             if (!q.empty() && q.front() <= i - k) {
//                 q.pop();
//             }
//             if (i >= k - 1) {
//                 if (q.empty()) {
//                     ans.push_back(0);
//                 } else {
//                     ans.push_back(arr[q.front()]);
//                 }
//             }
//         }

//         return ans;
//     }
// };

// // Approach 3:

// class Solution {
// public:
//     vector<int> firstNegInt(vector<int>& arr, int k) {

//         int n = arr.size();

//         vector<int> neg;
//         vector<int> ans;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] < 0)
//                 neg.push_back(i);
//         }

//         int j = 0;

//         for (int i = 0; i <= n - k; i++) {
//             while (j < neg.size() && neg[j] < i)
//                 j++;
//             if (j < neg.size() && neg[j] <= i + k - 1)
//                 ans.push_back(arr[neg[j]]);
//             else
//                 ans.push_back(0);
//         }

//         return ans;
//     }
// };