#include <iostream>
using namespace std;

// // leetcode 78 :- Subsets
// class Solution {
// private:
//     void solve(vector<int> nums, vector<int> output, int index, vector<vector <int>>& ans){
//         if(index >= nums.size()) {
//             ans.push_back(output);
//             return;
//         }
//         //exclude
//         solve(nums, output, index+1, ans);
//         //include
//         output.push_back(nums[index]);
//         solve(nums, output, index+1, ans);
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector <int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(nums, output, index, ans);
//         return ans;
//     }
// };



// // code360 :- Subsequences of substring.
// #include <bits/stdc++.h> 

// void solve(string str, string output, int index, vector<string>& ans){
// 	if(index >= str.length()) {
// 		if(!output.empty()) ans.push_back(output);
// 		return;
// 	}
// 	solve(str,output,index+1,ans);
// 	output.push_back(str[index]);
// 	solve(str,output,index+1,ans);
// }

// vector<string> subsequences(string str){
	
// 	vector<string> ans;
// 	string output;
// 	int index = 0;
// 	solve(str, output, index, ans);
// 	return ans;
	
// }