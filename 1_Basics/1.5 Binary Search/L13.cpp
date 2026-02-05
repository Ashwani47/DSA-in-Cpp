#include <iostream>
using namespace std;

// // // Q:- First and Last Position of an Element In Sorted Array. (code 360)

// // int firstOcc(int arr[], int n, int key){
// //     int start=0,end=n-1,mid;
// //     int ans=-1;
// //     while(start<=end){
// //         mid=start+(end-start)/2;
// //         if(arr[mid]==key){
// //             ans=mid;
// //             end=mid-1;
// //         }
// //         else if(arr[mid]>key){
// //             end=mid-1;
// //         }
// //         else {
// //             start=mid+1;
// //         }
// //     }
// //     return ans;
// // }

// // int lastOcc(int arr[], int n, int key){
// //     int start=0,end=n-1,mid;
// //     int ans=-1;
// //     while(start<=end){
// //         mid=start+(end-start)/2;
// //         if(arr[mid]==key){
// //             ans=mid;
// //             start=mid+1;
// //         }
// //         else if(arr[mid]>key){
// //             end=end-1;
// //         }
// //         else {
// //             start=mid+1;
// //         }
// //     }
// //     return ans;
// // }

// // int main (){
// // int arr[100],n,key;
// // cout<<"enter the size of the array : ";
// // cin>>n;
// // cout<<"enter the array : ";
// // for(int i= 0;i< n;i++){
// //     cin>>arr[i];
// // }
// //     cout<<"enter the key to search : ";
// //     cin>>key;
// //     cout<<"first occurance of key is at : "<<firstOcc(arr,n,key)<<endl;
// //     cout<<"last occurance of key is at : "<<lastOcc(arr,n,key);
// //     return 0;
// // }

//                 // or via using two pointer approach (self)
// int main()
// {
//     int a[100], n;
//     cout << "enter the size of the array : ";
//     cin >> n;
//     cout << "enter the sorted array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "enter the element to search : ";
//     int key, i, j;
//     cin >> key;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             cout << "first occurance is at : " << i;

//             break;
//         }
//     }
//     for (int j = n - 1; j >= 0; j--)
//     {
//         if (a[j] == key)
//         {
//             cout << "last occurance is at : " << j;

//             break;
//         }
//     }
//     return 0;
// }

// // leetcode 852. Peak Index in a Mountain Array

// // // Approach-1 SELF
// // int peak(int arr[],int n){
// //     int ans=0;
// //     for(int i=0;i<n;i++){
// //         if(arr[i+1]-arr[i]<0){
// //             ans=i;
// //             break;
// //         }
// //     }
// //     return ans;
// // }

// // int main (){
// //     int arr[100],n;
// //     cout<<"enter the size of the array : ";
// //     cin>>n;
// //     cout<<"enter the array : ";
// //     for(int i= 0;i< n;i++){
// //         cin>>arr[i];
// //     }
// //     cout<<"peak is at: "<<peak(arr,n);
// //     return 0;
// // }

// // Approach-2
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s=0,e=arr.size()-1,mid=s+(e-s)/2;
//         while(s<e){
//             if(arr[mid]<arr[mid+1]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid;
//             }
//             mid=s+(e-s)/2;
//         }
//         return s;
//     }
// };