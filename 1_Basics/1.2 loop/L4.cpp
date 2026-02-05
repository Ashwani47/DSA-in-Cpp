#include<iostream>
using namespace std;

// // pattern 1 - 
// // 1 2 3 4
// // 1 2 3 4
// // 1 2 3 4
// // 1 2 3 4
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j <<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 2 -
// // 1 2 3
// // 4 5 6
// // 7 8 9
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int i=1,a=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<a <<" ";
//             j++;
//             a++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }

// // pattern  3 :-
// // *
// // * *
// // * * *
// // * * * *
// int main (){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"* ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 4 :-
// // 1
// // 2 2
// // 3 3 3
// // 4 4 4 4
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i <<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 5 :-
// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10
// int main(){
//     int n;
//     cin>>n;
//     int i=1,a=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<a<<" ";
//             j++;
//             a++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 6 :-
// // 1
// // 2 3
// // 3 4 5
// // 4 5 6 7
// // // method 1
// // int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     while(i<=n){
// //         int j=1,a=i;
// //         while(j<=i){
// //             cout<<a<<" ";
// //             a++;
// //             j++;
// //         }
// //         i++;
// //         cout<<endl;
// //     }
// // }
// // method 2
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=i;
//         while(j<=2*i-1){
//             cout<<j<<" ";
//             // a++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 7 :-
// // 1
// // 2 1
// // 3 2 1
// // 4 3 2 1
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int a=i;
//         int j=1;
//         while(j<=i){
//             cout<<a<<" ";
//             a--;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 8:-
// // A A A A
// // B B B B 
// // C C C C
// // D D D D
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch='A'+i-1;
//             cout<<ch <<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 9 :-
// // A B C D 
// // A B C D 
// // A B C D 
// // A B C D 
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch='A';
//         while(j<=n){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 10:-
// // A B C D 
// // B C D E 
// // C D E F 
// // D E F G 
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch='A'+i-1;
//         while(j<=n){
//             cout<<ch<<" ";
//             j++;
//             ch++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 11 - 
// //       *
// //     * *
// //   * * *
// // * * * *
// int main () {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1,k=1;
//         while(k<=n-i){
//             cout<<"  ";
//             k++;
//         }
//         while(j<=i){
//             cout<<"* ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 12 -
// // * * * *
// //   * * *
// //     * *
// //       *
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1,k=1;
//         while(j<=i-1){
//             cout<<"  ";
//             j++;
//         }
//         while(k<=n-i+1){
//             cout<<"* ";
//             k++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 13 - 
// //       1
// //     1 2 1
// //   1 2 3 2 1
// // 1 2 3 4 3 2 1
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1,k=1,l=1;
//         int a=1,b=i-1;
//         while(j<=n-i){
//             cout<<"  ";
//             j++;
//         }
//         while(k<=i){
//             cout<<a <<" ";
//             a++;
//             k++;
//         }
//         while(l<=i-1){
//             cout<<b<<" ";
//             b--;
//             l++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// // pattern 14 -
// // 1 2 3 4 5 5 4 3 2 1
// // 1 2 3 4 * * 4 3 2 1
// // 1 2 3 * * * * 3 2 1
// // 1 2 * * * * * * 2 1
// // 1 * * * * * * * * 1
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1,k=1,l=1;
//         int a=1,b=n-i+1;
//         while(j<=n-i+1){
//             cout<<a<<" ";
//             a++;
//             j++;
//         }
//         while(k<=2*i-2){
//             cout<<"* ";
//             k++;
//         }
//         while(l<=n-i+1){
//             cout<<b<<" ";
//             b--;
//             l++;
//         }
//         i++;
//         cout<<endl;
//     }
// }