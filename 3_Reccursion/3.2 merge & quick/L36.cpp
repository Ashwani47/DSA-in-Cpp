#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] < pivot) count++;
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    pivot = arr[pivotIndex];
    int i = s, j = e;
    while(i < j){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e) return ;

    // partition
    int pivotIndex = partition(arr, s, e);

    // recursive calls for left part and right part too..
    quickSort(arr, s, pivotIndex-1);
    quickSort(arr, pivotIndex+1, e);

}

int main(){

    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    cout << "Sorted array is :- ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    delete []arr;

    return 0;
}