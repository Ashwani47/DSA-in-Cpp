#include <iostream>
using namespace std;

// // Q:- code 360:- Book Allocate 

// bool isPossibleSoln(vector<int>& arr, int n, int m, int mid){
//     int studentCount = 1;
//     int pageSum = 0;
//     for(int i=0; i<n; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount > m || mid < arr[i]){
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     if(m > n) return -1;
//     int s=0;
//     int sum=0;
//     int ans = -1;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int mid = s+(e-s)/2;
    
//     while(s<=e){
//         if(isPossibleSoln(arr, n, m,mid)){
//             ans= mid;
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }

// //H.W:- leetcode:- 410 :- Split Array Largest Sum(simillar to bookk allocation problem).

// class Solution {
// public:
//     bool isPossibleSoln(vector<int>& nums, int k, int mid){
//         int subarrayCount=1;
//         int subarraySum = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(subarraySum + nums[i] <= mid){
//                 subarraySum += nums[i];
//             }
//             else{
//                 subarrayCount++;
//                 if(subarrayCount > k || mid < nums[i]){
//                     return false;
//                 }
//                 subarraySum = nums[i];
//             }
//         }
//         return true;
//     }

//     int splitArray(vector<int>& nums, int k) {
//         int sum = 0;
//         for(int i=0; i<nums.size(); i++){
//             sum += nums[i];
//         }
//         int s=0,e=sum,ans=-1;
//         int mid = s+(e-s)/2;
//         while(s<=e){
//             if(isPossibleSoln(nums, k, mid)){
//                 ans = mid;
//                 e=mid-1;
//             }
//             else{
//                 s=mid+1;
//             }
//             mid= s+(e-s)/2;
//         }
//         return ans;
//     }
// };

// // H.W. :- code-360 :- Painter's Partition Problem(ditto simillar concept to the previous ones.)

// bool isPossibleSoln(vector<int> &boards, int k, int mid){
//     int painterCount = 1;
//     int boardlengthSum = 0;
//     for(int i=0;i<boards.size();i++){
//         if(boardlengthSum + boards[i] <= mid){
//             boardlengthSum += boards[i];
//         }
//         else{
//             painterCount++;
//             if(painterCount > k || mid < boards[i]){
//                 return false;
//             }
//             boardlengthSum=boards[i];
//         }
//     }
//     return true;
// }
// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int sum=0;
//     for(int i=0; i<boards.size(); i++){
//         sum += boards[i];
//     }
//     int s = 0, e = sum , ans = -1;
//     int mid = s+(e-s)/2;
//     while(s<=e){
//         if(isPossibleSoln(boards,k,mid)){
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// // Q:- Code 360 :- Aggressive cow's Problem.

// bool isPossibleSoln(vector<int> &stalls, int k, int mid){
//     int cowCount = 1;
//     int lastPos = stalls[0];

//     for(int i=1; i<stalls.size(); i++){
//         if(stalls[i] - lastPos >= mid){
//             cowCount++;
//             if(cowCount == k){
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {

//     sort(stalls.begin(), stalls.end());

//     int s=1, e=stalls[stalls.size()-1]-stalls[0], ans = -1;
    
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(isPossibleSoln(stalls, k, mid)){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }