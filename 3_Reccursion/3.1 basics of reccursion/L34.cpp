#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// reverse a string using recursion
string rev(string str, int s, int e){
    if(s >= e) return str;
    swap(str[s], str[e]);
    return rev(str, s+1, e-1);
}

// check palindrome
bool palindrome(string str, int s, int e){
    if(s>=e) return true;
    if(str[s] == str[e]) return palindrome(str, s+1, e-1);
    else return false;
}

// calculate powers
int powers(int a, int b){
    if(b == 0) return 1;
    return a*powers(a, b-1);    
}

// bubble sort using reccursion
void bubbleSort(int arr[], int n){
    if(n == 0 || n == 1) return;
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    }
    return bubbleSort(arr, n-1);
}

int main(){

    // string str;
    // cin >> str;

    // int len = str.length();

    // string reverse = rev(str, 0, len-1);
    // cout << "Reverse of " << str << " is " << reverse << endl; 
    
    // if(palindrome(str, 0, len-1)) cout << "Yes, it is a palindrome.";
    // else cout << "No, its not.";

    // int a,b;
    // cout << "Enter a :- " ;
    // cin >> a;
    // cout << "Enter b :- " ;
    // cin >> b;
    // cout << "a raised to the power b is :- " << powers(a,b) << endl;

    int n;
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array :- ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    cout << "Sorted array is :- ";
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}