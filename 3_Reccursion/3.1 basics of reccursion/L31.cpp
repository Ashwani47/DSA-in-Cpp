#include <iostream>
using namespace std;

void print(int n){
    if(n == 0) return;
    cout << n << " ";
    print(n-1);
}

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n*factorial(n-1);
}

int power(int n){
    if(n == 0) return 1;
    return 2*power(n-1);
}

int main(){

    int n;
    cin >> n;
    int ans = factorial(n);
    // cout << "factorial of " << n << " is :- " << ans << endl; 
    int res = power(n);
    // cout << "2 raised to the power " << n << " is :- " << res << endl;
    print(n);
    
    return 0;
}