#include<iostream>
using namespace std;

// Binary Search

int binarySearch(int arr[], int n, int key){
    int low=0,high=n-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key) return mid;
        else  if(arr[mid]>key) {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    } 
    return 0;
}

int main(){
    int arr[100],n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to search for: ";
    cin>>key;
    if(binarySearch(arr,n,key)) cout<<"element is found at : "<<binarySearch(arr,n,key);
    else cout<<"key is not found.";
    return 0;
}
