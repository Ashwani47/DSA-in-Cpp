#include <bits/stdc++.h> 
#include <string>

using namespace std;

int fib(int n){
    if(n == 0) return 0;
    else if (n == 1) return 1;
    return fib(n-1) + fib (n-2);
}

// coding ninjas :  Count Ways To Reach The N-th Stairs
int countDistinctWays(int nStairs) {
    if(nStairs < 0) return 0;
    else if(nStairs == 0) return 1;
    else return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}

// sayDigits
void sayDigits(int n, string arr[]){
    if(n == 0) return;

    int digit = n%10;
    n = n/10;
    sayDigits(n, arr);
    cout << arr[digit] << " " ;
}

int main(){
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cin >> n;
    // int ans = fib(n);
    // cout << n << "th Fibonacci number is :- " << ans << endl;

    if (n == 0) {
            cout << arr[0];
    } else {
        sayDigits(n, arr);
    }    return 0;
}