
//         // DAY - 3 Reccursion

// #include<bits/stdc++.h>
// using namespace std;

// void print(int n){
//     if(n == 0) return ;
//     print(n-1);
//     cout << n << " ";
// }

// int sum(int n){
//     if(n == 0) return 0;
//     return n + sum(n-1);
// }

// void reverseArr(int arr[], int s, int e){
//     if(s>e) return;
//     swap(arr[s], arr[e]);
//     return reverseArr(arr, s+1, e-1);
// }

// int fib(int n){
//     if(n <=1) return n;
//     else return fib(n-1) + fib(n-2);
// }

// void printFib(int n, int a = 0, int b = 1){
//     if(n == 0) return;
//     cout << a << " ";
//     printFib(n - 1, b, a + b);
// }

// void printSubSeq(string s, vector<char>& ans, int i = 0){
//     if (i == s.length()) {
//         for(char c : ans) cout << c;
//         cout << " ";
//         return;
//     }
//     else{
//         printSubSeq(s, ans, i + 1); // exclude
//         ans.push_back(s[i]); // include
//         printSubSeq(s, ans.push_back(s[i]), i+1); // include
//         ans.pop_back(); // backtrack
//     }
// }

// int main(){
//     // int n;
//     // cin >> n;

//     // print(n);

//     // int sum = n*(n+1)/2;
//     // cout << "Sum of first n numbers :- " << sum(n);

//     // int arr[] = {1,2,3,4,5,6,7,8,9};
//     // reverseArr(arr, 0, 8);
//     // for(int i = 0; i < 9; i++){
//     //     cout << arr[i] << " ";
//     // }

//     // cout << fib(n);

//     // printFib(n);

//     vector<char> ans;
//     string s;
//     cin >> s;
//     printSubSeq(s, ans);




//     return 0;
// }


//                                         // leetcode - 36 : isValid sudoku

// class Solution {
// public:
//     bool rowValid(vector<vector<char>>& board, int r, int c) {
//         char temp = board[r][c];
//         if(temp == '.') return true;

//         for(int i = 0; i < 9; i++) {
//             if(i != c && temp == board[r][i]) return false;
//         }
//         return true;
//     }

//     bool colValid(vector<vector<char>>& board, int r, int c) {
//         char temp = board[r][c];
//         if(temp == '.') return true;

//         for(int i = 0; i < 9; i++) {
//             if(i != r && temp == board[i][c]) return false;
//         }
//         return true;
//     }

//     bool gridValid(vector<vector<char>>& board, int r, int c) {
//         char temp = board[r][c];
//         if(temp == '.') return true;

//         int br = (r / 3) * 3;
//         int bc = (c / 3) * 3;

//         for(int i = br; i < br + 3; i++) {
//             for(int j = bc; j < bc + 3; j++) {
//                 if((i != r || j != c) && board[i][j] == temp) return false;
//             }
//         }
//         return true;
//     }

//     bool isValidSudoku(vector<vector<char>>& board) {
//         for(int i = 0; i < 9; i++) {
//             for(int j = 0; j < 9; j++) {
//                 if(!rowValid(board, i, j) || 
//                    !colValid(board, i, j) || 
//                    !gridValid(board, i, j))
//                     return false;
//             }
//         }
//         return true;
//     }
// };




//                                         // Leetcode - 37 : SUDOKU SOLVER
// #include<bits/stdc++.h>
// using namespace std;

// void print(vector<vector<int>>& sudoku){
//     for(int i = 0; i < 9; i++){
//         for(int j = 0; j < 9; j++){
//             cout << sudoku[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// bool isEmpty(vector<vector<int>>& sudoku, int r, int c){
//     return sudoku[r][c] == 0;
// }

// bool isValid(vector<vector<int>>& sudoku, int num, int r, int c){
//     for(int j = 0; j < 9; j++)
//         if(sudoku[r][j] == num) return false;

//     for(int i = 0; i < 9; i++)
//         if(sudoku[i][c] == num) return false;

    // int br = (r / 3) * 3;
    // int bc = (c / 3) * 3;

    // for(int i = br; i < br + 3; i++){
    //     for(int j = bc; j < bc + 3; j++){
    //         if(sudoku[i][j] == num) return false;
    //     }
    // }
    // return true;
// }

// bool solve(vector<vector<int>>& sudoku){
//     for(int i = 0; i < 9; i++){
//         for(int j = 0; j < 9; j++){
//             if(isEmpty(sudoku, i, j)){
//                 return fill(sudoku, i, j);
//             }
//         }
//     }
//     return true;
// }

// bool fill(vector<vector<int>>& sudoku, int r, int c){
//     for(int i = 1; i <= 9; i++){
//         if(isValid(sudoku, i, r, c)){
//             sudoku[r][c] = i;

//             if(solve(sudoku)) return true;

//             sudoku[r][c] = 0; // backtrack
//         }
//     }
//     return false;
// }

// int main(){
//     vector<vector<int>> sudoku(9, vector<int>(9));

//     for(int i = 0; i < 9; i++){
//         for(int j = 0; j < 9; j++){
//             cin >> sudoku[i][j];
//         }
//     }

//     if(solve(sudoku)) print(sudoku);
//     else cout << "No Solution Exists";

//     return 0;
// }


//                     // leetcode 79 :- Word search
// class Solution {
// public:

//     bool isSafe(vector<vector<char>>& board, vector<vector<int>>& visited, int m, int n, int x, int y, string& word, int i){
//         return (x >= 0 && x < m && y >= 0 && y < n && visited[x][y] == 0 && board[x][y] == word[i]);
//     }

//     bool solve(vector<vector<char>>& board, int m, int n, int x, int y, vector<vector<int>>& visited, string& word, int i = 0){
//         if(i == word.size()-1){
//             return true;
//         }

//         visited[x][y] = 1;
//         if(isSafe(board, visited, m, n, x+1, y, word, i+1))
//             if(solve(board, m, n, x+1, y, visited, word, i+1)) return true;
//         if(isSafe(board, visited, m, n, x, y-1, word, i+1))
//             if(solve(board, m, n, x, y-1, visited, word, i+1)) return true;
//         if(isSafe(board, visited, m, n, x, y+1, word, i+1))
//             if(solve(board, m, n, x, y+1, visited, word, i+1)) return true;
//         if(isSafe(board, visited, m, n, x-1, y, word, i+1))
//             if(solve(board, m, n, x-1, y, visited, word, i+1)) return true;
//         visited[x][y] = 0;
//         return false;
//     }

//     bool exist(vector<vector<char>>& board, string word) {
//         int m = board.size();
//         int n = board[0].size();

//         vector<vector<int>> visited(m, vector<int>(n,0));
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (board[i][j] == word[0]) {
//                     if (solve(board, m, n, i, j, visited, word, 0))
//                         return true;
//                 }
//             }
//         }
//         return false;
//     }
// };