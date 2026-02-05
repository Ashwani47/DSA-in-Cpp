#include <iostream>
#include <vector>
#include <string>
using namespace std;

// // to lowerCase :- 
// char toLowercase (char ch){
//     if(ch >= 'a' && ch <= 'z') return ch;
//     else return ch - 'A' + 'a';
// }
// // to Upper case :- 
// char toUpperCase (char ch){
//     if(ch >= 'A' && ch <= 'Z') return ch;
//     else return ch - 'a' + 'A';
// }
// // is Alpha numeric?
// bool isAlNum(char ch){
//     return ((ch >= 'a' && ch <= 'z') ||
//             (ch >= 'A' && ch <= 'Z') ||
//             (ch >= '0' && ch <= '9'));
// }
// // Q :- Reverse a String.
// void reverseString(char name[], int n){
//     int s = 0, e = n-1;
//     while(s<e){
//         swap(name[s], name[e]);
//         s++;
//         e--;
//     }
// }
// // Q :- length of a string
// int getLength(char name[]){
//     int i = 0, count = 0;
//     while(name[i]!='\0'){
//         count++;
//         i++;
//     }
//     return count;
// }

// // Q :- Check palindrome.
// bool isPalindrome(char s[], int n){
//     int l = 0, h = n-1;
//     while(l<h){
//         if(toLowercase(s[l]) != toLowercase(s[h])){
//             return false;
//         }
//         else{
//             l++;
//             h--;
//         }
//     }
//     return true;
// }

// // Driver code
// int main(){
//     char name[20];
//     cout << "Enter Your Name :- ";
//     cin >> name;
//     cout << "your name is :- ";
//     cout << name << endl ;
//     int l = getLength(name);
//     cout << "Length of your name is :- " << l << endl;
//     reverseString(name, l);
//     cout << "Reverse of your Name is :- " << name << endl;
//     cout << "is Palindrome ? " << isPalindrome(name, l);
//     return 0;
// }

// // leetcode 125 :- valid palindrome (code360 :- check palindrome. )

// class Solution {
// public:
//     char toLowerCase(char ch){
//         if(ch >= 'a' && ch <= 'z') return ch;
//         else return ch -'A' + 'a';
//     }
//     bool isAlNum(char ch){
//         return ((ch >= 'a' && ch <= 'z') || 
//                 (ch >= 'A' && ch <= 'Z') ||
//                 (ch >= '0' && ch <= '9'));
//     }
//     bool isPalindrome(string s) {
//         int l = 0, h = s.length()-1;
//         while(l<h){
//             if(!isAlNum(s[l])) l++;
//             else if(!isAlNum(s[h])) h--;
//             else{
//                 if(toLowerCase(s[l]) != toLowerCase(s[h])) return false;
//                 else{
//                     l++;
//                     h--;
//                 }
//             }
//         }
//         return true;
//     }
// };

// // leetcode 186 :- reverse string in a word II.(premium).

// void reverseString(vector<char>& s, int l, int h){
//     while(l<h){
//         swap(s[l], s[h]);
//         l++;
//         h--;
//     }
// }
// void reverseWords(vector<char>& s){
//     int n = s.size();   
//     reverseString(s, 0, n-1);
//     int start = 0;
//     for(int i = 0; i<=n; i++){
//         if(i == n || s[i] == ' '){
//             reverseString(s, start, i-1);
//             start = i + 1;
//         }
//     }
// }
// int main(){
//     vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
//     reverseWords(s);

//     for (char c : s) cout << c;
//     cout << endl;

//     return 0;
// }

// // Q :- Return Maximum Occurring Character In The Input String

// class Solution {
//   public:
//     char getMaxOccuringChar(string& s) {
//         vector<int> count(26);
//         for(char c : s){
//             count[c-'a']++;
//         }
//         int max = count[0];
//         int index = 0;
//         for(int i =0; i<26; i++){
//             if(count[i]>max) {
//                 max = count[i];
//                 index = i;
//             }
//         }
//         return 'a' + index;
//     }
// };

// // cin.getline() and getline()

// int main(){
//     char c[50];
//     cout << "enter your charachter array here :- " ;
//     cin.getline(c,50);
//     cout << "You charachter array contain :- " ;
//     for(char a : c) cout << a; // here some garbage texts will also be generated to the rest vacant places of array.
//     cout << endl;
//     string s;
//     cout << "enter your string here :- ";
//     getline(cin, s);
//     cout << "your string contain :- " << s;
//     return 0;
// }

// // code 360 :- replace spaces

// #include <bits/stdc++.h> 
// string replaceSpaces(string &str){
// 	string temp = "";
// 	for(int i =0 ; i < str.length(); i++){
// 		if(str[i] == ' ') {
// 			temp.push_back('@');
// 			temp.push_back('4');
// 			temp.push_back('0');
// 		}
// 		else{
// 			temp.push_back(str[i]);
// 		}
// 	}
// 	return temp;

//     // // without using etra space
//     // for(int i = 0; i < str.length(); i++){
// 	// 	if(str[i] == ' '){
// 	// 		str.replace(i, 1, "@40");
// 	// 	}
// 	// }
// 	// return str;
// }

// // leetcode 1910:- remove all occurances 

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         int len = part.length();
//         while( s.length() != 0 && s.find(part) != string::npos){
//             int spos = s.find(part);
//             s.erase(spos, len);
//         }
//         return s;
//     }
// };

// // leetcode 567:- permutation in string 

// class Solution {
// private:
//     bool checkEqual(int a[26], int b[26]) {
//         for (int i = 0; i < 26; i++) {
//             if (a[i] != b[i]) return false;
//         }
//         return true;
//     }

// public:
//     bool checkInclusion(string s1, string s2) {
//         int count1[26] = {0};
        
//         // Frequency count of s1
//         for (int i = 0; i < s1.length(); i++) {
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }
        
//         int i = 0;
//         int windowSize = s1.length();
//         int count2[26] = {0};
        
//         // First window in s2
//         while (i < windowSize && i < s2.length()) {
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }
        
//         if (checkEqual(count1, count2)) return true;
        
//         // Sliding window
//         while (i < s2.length()) {
//             char newChar = s2[i];
//             int index = newChar - 'a';
//             count2[index]++;
            
//             char oldChar = s2[i - windowSize];
//             index = oldChar - 'a';
//             count2[index]--;
            
//             i++;
            
//             if (checkEqual(count1, count2)) return true;
//         }
        
//         return false;
//     }
// };

// // leetcode 1047:- Remove All Adjacent Duplicates In String

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         int i = 0;
//         while (i < (int)s.length() - 1) {
//             if (s[i] == s[i+1]) {
//                 s.erase(i, 2);
//                 if (i > 0) i--;  
//             } else {
//                 i++;
//             }
//         }
//         return s;
//     }
// };

// // leetcode 443 :- string compression

// class Solution {
//     // slightly used chatgpt when i got stuck at a point but the logic used here is mine
// public:
//     int compress(vector<char>& chars) {
//         int i = 0;
//         while (i < chars.size()) {
//             int j = i;

//             // find last occurrence of this group
//             while (j < chars.size() && chars[j] == chars[i]) {
//                 j++;
//             }

//             int count = j - i;  // length of group

//             if (count > 1) {
//                 // erase all duplicates except the first
//                 chars.erase(chars.begin() + i + 1, chars.begin() + j);

//                 // insert the count digits
//                 string cnt = to_string(count);
//                 chars.insert(chars.begin() + i + 1, cnt.begin(), cnt.end());

//                 // move i forward (past inserted digits)
//                 i += 1 + cnt.size();
//             } else {
//                 i++;  // no duplicates, just move on
//             }
//         }

//         return chars.size(); // return new length
//     }
// };
