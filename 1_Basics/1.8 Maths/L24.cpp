#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

// // int countPrimes(int n){
// //     int count = 0;
// //     for(int i = 0; i <= n; i++){
// //         if(isPrime(i)) count++;
// //     }
// //     return count;
// // } // but it is inefficient for larger inputs. another approach is via sieve of eratosthenes.
// class Solution {
// public:
//     int countPrimes(int n) {
//         // sieve eratosthenes approach
//         int count = 0;
//         vector<bool> arr(n+1, 1);

//         arr[0] = arr[1] = 0;
//         for(int i = 2; i < n; i++){
//             if(arr[i]){
//                 count++;
//             }
//             for(int j = 2*i; j < n; j = j+i){
//                 arr[j] = 0;
//             }
//         }
//         return count;
//     }
// }; // but this method is also very time taking and space consuming although less then the traditional one. here comes segmented sieve(self).

// euclid's algo for GCD.
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a-b,b);
    else return gcd(a,b-a);
}

// // Fast exponentiation
// long long fastPower(long long a, long long b) {
//     long long result = 1;
//     while (b > 0) {
//         if (b & 1) {         // if b is odd
//             result *= a;
//         }
//         a = a * a;           // square base
//         b >>= 1;             // divide exponent by 2
//     }
//     return result;
// }

// // modulo fast exponentiation
// long long modPower(long long a, long long b, long long mod) {
//     long long result = 1;
//     a %= mod;
//     while (b > 0) {
//         if (b & 1) result = (result * a) % mod;
//         a = (a * a) % mod;
//         b >>= 1;
//     }
//     return result;
// }


int main(){

    // int n;
    // cout << "Enter any number :- ";
    // cin >> n;
    // // if(isPrime(n)){
    // //     cout << "Yes, " << n << " is a prime number.";
    // // }
    // // else{
    // //     cout << "No, Not a prime.";
    // // }
    // cout << countPrimes(n);

    // gcd
    int a,b;
    cout << "enter two numbers :- ";
    cin >> a >> b;
    cout << "GCD of a and b is :- " << gcd(a,b);

    return 0;
}