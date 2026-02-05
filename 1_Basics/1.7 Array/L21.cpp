#include<iostream>
#include<vector>
using namespace std;

// // leetcode 1752. Check if Array Is Sorted and Rotated

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int i = 0, j = 0;
//         while(j<nums.size()){
//             if(nums[j] != 0){
//                 swap(nums[i], nums[j]);
//                 i++;
//             }
//             j++;
//         }
//     }
// };

// // code360 :  Sum Of Two Arrays

// #include <bits/stdc++.h> 

// vector<int> reverse(vector<int> v){
// 	int s=0,e=v.size()-1;
// 	while(s<e){
// 		swap(v[s],v[e]);
// 		s++;
// 		e--;
// 	}
// 	return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	int i = n-1;
// 	int j = m-1;
// 	int carry = 0;
// 	vector<int> ans;
// 	while(i>=0 && j>=0){
// 		int sum = a[i] + b[j] + carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 		i--;
// 		j--;
// 	}
// 	while(i>=0){
// 		int sum = a[i] + carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 		i--;
// 	}
// 	while(j>=0){
// 		int sum =b[j] + carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 		j--;
// 	}
// 	while(carry != 0){
// 		int sum = carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 	}
// 	return reverse(ans);
// }