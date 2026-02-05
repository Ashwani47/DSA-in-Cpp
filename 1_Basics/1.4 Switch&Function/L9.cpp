#include <iostream>
#include <algorithm>
using namespace std;

// // implementation of array using functions

// void printArray(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
// }

// int main()
// {
//     int first[5];
//     int second[5] = {1, 2, 3, 4, 5};
//     int third[5] = {0};
//     int fourth[5] = {1, 2};

//     cout << "First array is :-";
//     printArray(first, 5);
//     cout <<endl << "second array is :-";
//     printArray(second, 5);
//     cout <<endl << "third array is :-";
//     printArray(third, 5);
//     cout <<endl << "fourth array is :-";
//     printArray(fourth, 5);

//     return 0;
// }

// // Array of charachter data type

// int main(){
//     char ch[5]={'a','b','c','d','e'};
//     for(int i=0;i<5;i++){
//         cout<< ch[i] <<" ";
//     }
//     return 0;
// }

// // Maximum or Minimum in a array

// // function to get maximum of an array
// int getMax(int num[],int size){
//     int max=num[0];
//     for(int i=0;i<size;i++){
//         if(num[i]>max) max=num[i];
//     }
//     return max;
// }

// // function to get minimum of an array
// int getMin(int num[],int size){
//     int min=num[0];
//     for(int i=0;i<size;i++){
//         if(num[i]<min) min=num[i];
//     }
//     return min;
// }

// int main(){

//     int a[100],n;
//     cout<<"enter the size of array :- ";
//     cin>>n;
//     cout<<"enter the array :- ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"max element from the given array is :- " <<getMax(a,n) <<endl;
//     cout<<"min element from the given array is :- " <<getMin(a,n);

//     return 0;
// }
// // there is a pre defined function max(element1,element2) which gives the maximum of the two;

// array can be updated  inside another function without using pointer
// void update(int a[],int n){
//     a[0]=120;
//     cout<<"printing inside update function :- ";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }

// int main(){
//     int b[5]={1,2,3,4,5};
//     cout<<endl<<"printing in main function before updation :- ";
//     for(int i=0;i<5;i++){
//         cout<<b[i]<<" ";
//     }
//     cout<<endl;
//     update(b,5);
//     cout<<endl<<"printing inside the main function after updation:- ";
//     for(int i=0;i<5;i++){
//         cout<<b[i]<<" ";
//     }
//     return 0;
// }

// // H.W. :- sum of elements of array

// int main(){
//     int a[100],n;
//     cout<<"enter the size of array :- ";
//     cin>>n;
//     cout<<"enter the elements in array :- ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+a[i];
//     }
//     cout<<"Sum of elements from the given array is = "<<sum;
//     return 0;
// }

// *** LINEAR SEARCH  ***

// bool search(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key) return 1;
//     }
//     return 0;
// }

// int main(){
//     int a[100],n,key;
//     cout<<"enter the size of array :- ";
//     cin>>n;
//     cout<<"enter the array :- ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter the key to search :- ";
//     cin>>key;
//     int x = search(a,n,key);
//     if(x) cout<<"key is found.";
//     else cout<<"key is not found.";
//     return 0;
// }

// // reverse an array

// void reverse(int arr[],int n){
//     int temp;
//     for(int i=0;i<n/2;i++){
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int a[100],n;
//     cout<<"enter the size of array :- ";
//     cin>>n;
//     cout<<"enter the array :- ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<< "the reverse of the given array is :- ";
//     reverse(a,n);
//     return 0;
// }

// // swap alternate
// // i/p: [1,2,3,4,5]
// // o/p: [2,1,4,3,5]

// void swapAlternate(int arr[], int n){
//     for(int i=0;i<n;i+=2){
//         if(i+1<=n-1){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     cout<<"after swapping : ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main (){
//     int n,arr[100];
//     cout<<"enter the size of array : ";
//     cin>>n;
//     cout<<"enter the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     swapAlternate(arr,n);
//     return 0;
// }

// // find unique

// int unique(int arr[], int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int n,arr[100];
//     cout<<"enter the size of array : ";
//     cin>>n;
//     cout<<"enter the array : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"the unique one is : "<< unique(arr,n);
//     return 0;
// }

// // duplicates in array (from code 360 by naukari)

// int duplicates(int arr[],int n){
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     for(int i=0;i<n;i++){
//         ans=ans^i;
//     }
//     return ans;
// }
// int main (){
//     int arr[100],n;
//     cout<<"enter the size of the array: ";
//     cin>>n;
//     cout<<"enter the array : ";
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     cout<<"the duplicate item is : " << duplicates(arr,n);
//     return 0;
// }

// // leetcode 442 :- find all duplicates in an array. (H.W.)

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> duplicates;
//         sort(nums.begin(), nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==nums[i+1]) {
//                 duplicates.push_back(nums[i]);
//             }
//         }
//         return duplicates;
//     }
// };

// // // code 360 - intersection of two sorted arrays

// // // approach 1 - code to sahi hai bus time limit exceeds
// // vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// // {
// // 	 vector<int> ans;
// //         for(int i=0;i<n;i++){
// //             for(int j=0;j<m;j++){
// //                 if(arr1[i]==arr2[j]){
// //                     ans.push_back(arr1[i]);
// //                     arr2[j]=-1;
// //                     break;
// //                 }
// //             }
// //         }
// //         return ans;
// // }

// // approach 2 - better utilization of sorted arrays.
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	int i=0,j=0;
// 	vector <int> result;

// 	while(i<n && j<m){

// 		if (arr1[i]==arr2[j]) {
// 			result.push_back(arr1[i]);
// 			i++;
// 			j++;
// 		}

// 		else if(arr1[i]<arr2[j]){
// 			i++;
// 		}

// 		else{
// 			j++;
// 		}
// 	}
// 	return result;
// }

// // pair sum from code 360

// vector<vector<int>> pairSum(vector<int> &arr, int s){

//    vector < vector<int> > ans;
//    for(int i=0;i<arr.size();i++){
//       for(int j=i+1;j<arr.size();j++){
//          if(arr[i]+arr[j]==s){
//             vector<int> temp;
//             temp.push_back(min(arr[i],arr[j]));
//             temp.push_back(max(arr[i],arr[j]));
//             ans.push_back(temp);
//          }
//       }
//    }
//    sort(ans.begin(),ans.end());
//    return ans;
// }

// // leetcode-1 two sum problem

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector <int> ans;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                 }
//             }
//         }
//         return ans;
//     }
// };

// // // // leetcode-15 threesome also from code 360.

// // // // approach-1 applying multiple for loops               issue:- duplicate triplets with different orders            solution:- add duplicate checks
// // // vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
// // //     vector<vector<int>> ans;
// // //     for (int i = 0; i < arr.size(); i++) {
// // //         for (int j = i + 1; j < arr.size(); j++) {
// // //             for (int l = j + 1; l < arr.size(); l++) {
// // //                 if (arr[i] + arr[j] + arr[l] == K) {
// // //                     vector<int> temp;
// // //                     temp.push_back(arr[i]);
// // //                     temp.push_back(arr[j]);
// // //                     temp.push_back(arr[l]);
// // //                     ans.push_back(temp);
// // //                 }
// // //             }
// // //         }
// // //     }
// // //     return ans;
// // // }

// // // approach-2 adding duplicate checks                issue:- TIME LIMIT EXCEEDS                  Solution:-using Two pointers approach
// //     vector<vector<int>> threeSum(vector<int>& nums) {
// //         vector<vector<int>> ans;
// //         sort(nums.begin(), nums.end()); // Sort the array to handle duplicates easily

// //         for (int i = 0; i < nums.size(); i++) {
// //             // Skip duplicate values for the first number
// //             if (i > 0 && nums[i] == nums[i - 1]) continue;

// //             for (int j = i + 1; j < nums.size(); j++) {
// //                 // Skip duplicate values for the second number
// //                 if (j > i + 1 && nums[j] == nums[j - 1]) continue;

// //                 for (int k = j + 1; k < nums.size(); k++) {
// //                     // Skip duplicate values for the third number
// //                     if (k > j + 1 && nums[k] == nums[k - 1]) continue;

// //                     if (nums[i] + nums[j] + nums[k] == 0) {
// //                         vector<int> temp;
// //                         temp.push_back(nums[i]);
// //                         temp.push_back(nums[j]);
// //                         temp.push_back(nums[k]);
// //                         ans.push_back(temp);
// //                     }
// //                 }
// //             }
// //         }

// //         return ans;
// //     }
// // };

// // approach - 3 using two pointers approach
// vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
//     vector<vector<int>> ans;
//     sort(arr.begin(), arr.end()); // Sort the array first

//     for (int i = 0; i < n; i++) {
//         // Skip duplicates for the first number
//         if (i > 0 && arr[i] == arr[i - 1]) continue;

//         int target = K - arr[i]; // The target sum for the remaining two numbers
//         int left = i + 1, right = n - 1;

//         while (left < right) {
//             int sum = arr[left] + arr[right];

//             if (sum == target) {
//                 ans.push_back({arr[i], arr[left], arr[right]});
//                 // Skip duplicates for the second number
//                 while (left < right && arr[left] == arr[left + 1]) left++;
//                 // Skip duplicates for the third number
//                 while (left < right && arr[right] == arr[right - 1]) right--;
//                 left++;
//                 right--;
//             } else if (sum < target) {
//                 left++; // We need a larger sum
//             } else {
//                 right--; // We need a smaller sum
//             }
//         }
//     }

//     return ans;
// }

// // Ques:- sort 0's and 1's

// int main(){
//     int n,arr[100];
//     cout<<"enter the size of the array:- ";
//     cin>>n;
//     cout<<"enter the array (0's and 1's only) :- ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int left=0,right=n-1;
//     while(left<right){

//         while(left<right && arr[left]==0) left++;

//         while(left<right &&arr[right]==1) right--;

//         // agar yaha tk pahunch gaye hai mtlb arr[left]=1 hai or arr[right]=0 hai.
//         if(left<right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
//     }
//     cout<<"sorted array is :- ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// // leetcode - 75 : sort colors || code360 : sort 0's , 1's & 2's

// void sort012(int *arr, int n) {
    
//     int left = 0, mid = 0, right = n - 1;
//     while (mid <= right)
//     {
//         if (arr[mid] == 0)
//         {
//             swap(arr[left], arr[mid]);
//             left++;
//             mid++;
//         }
//         else if (arr[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[right]);
//             right--;
//         }
//     }
// }