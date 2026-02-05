#include <iostream>
#include <vector>
using namespace std;

// // Q :- Reverse an array.

// vector<int> reverse(vector<int> v){
//     int s = 0, e = v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v){
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main(){

//     vector<int> v;
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(10);
//     v.push_back(9);

//     cout << "Current Order is :- " ;
//     print(v);

//     vector<int> ans = reverse(v);

//     cout << "Reversed order is :- ";
//     print(ans);

//     return 0;
// }

// // codeStudio :- Reverse the array.

// void reverseArray(vector<int> &arr , int m) {
//     int s = m+1, e = arr.size()-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }

// // leetcode 189 : Rotate Array.

// class Solution {
// public:
    

//     void reverse(vector<int>& v, int s, int e){
//         while(s<=e){
//             swap(v[s],v[e]);
//             s++;
//             e--;
//         }
//     }

//     void rotate(vector<int>& nums, int k){
//         k = k%nums.size();
//         reverse(nums, 0, nums.size()-1);
//         reverse(nums, 0, k-1);
//         reverse(nums, k, nums.size()-1);
//     }
// };


// // leetcode 88 : Merge sorted array.

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> nums3;
//         int i = 0, j = 0;
//         while(i<m && j<n){
//             if(nums1[i]<nums2[j]){
//                 nums3.push_back(nums1[i]);
//                 i++;
//             }
//             else{
//                 nums3.push_back(nums2[j]);
//                 j++;
//             }
//         }
//         while(i<m){
//             nums3.push_back(nums1[i]);
//             i++;
//         }
//         while(j<n){
//             nums3.push_back(nums2[j]);
//             j++;
//         }
//         nums1.clear();
//         nums1 = nums3;
//     }
// };

// // leetcode 283 : Move Zeroes .

// int main(){
//     int arr[8] = {0, 1, 0, 8, 9, 6, 0, 0};
//     int i = 0, j = 0;
//     while(j<8){
//         if(arr[j] != 0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//         j++;
//     }
//     cout << "New Array is :- ";
//     for(int k = 0; k < 8; k++){
//         cout << arr[k] << " ";
//     }
//     return 0;
// }