#include <iostream>
#include <vector>
using namespace std;

// print array
void printArray(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// linear search.
bool linearsearch(int arr[][3], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target) return 1;
        }
    }
    return 0;
}

// Row-wise sum
int rowSum(int arr[][3], int row, int col){
    int sum = 0;
    for(int i = 0; i < col; i ++){
        sum = sum + arr[row][i];
    }
    return sum;
}

// maximum rowSum
int maxRowSum(int arr[][3], int row, int col){
    int maxSum = rowSum(arr, 0, col);
    for(int i = 1; i < row; i++){
        int sum = rowSum(arr, i, col);
        if(sum > maxSum) maxSum = sum;
    }
    return maxSum;
}

// Wave printing Array
void wavePrint(int arr[][3], int row, int col, int type){
    if( type == 0){
        for(int i = 0; i < row; i++){
            if(i%2 == 0){
                for(int j = 0; j < col; j++){
                    cout << arr[i][j]  << " ";
                }
            }
            else{
                for(int j = col-1; j >= 0; j--){
                    cout << arr[i][j]  << " ";
                }
            }
        }
    }
    else{
        for(int j = 0; j < col; j++){
            if(j%2 == 0){
                for(int i = 0; i < row; i++){
                    cout << arr[i][j]  << " ";
                }
            }
            else{
                for(int i = row-1; i >= 0; i--){
                    cout << arr[i][j]  << " ";
                }
            }
        }
    }
}

// // transpose
// void transpose(int arr[][3]){
//     int m = 3;
//     int n = 3;
//     for(int i = 0; i < m; i++){
//         for(int j = i+1; j < n; j++){
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

// // leetcode 54 :- spiral print
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         vector<int> ans;
//         int count = 0;
//         int total = row * col;

//         int sRow = 0, sCol = 0;
//         int eRow = row - 1, eCol = col - 1;

//         while (count < total) {
//             // Traverse Top Row
//             for (int i = sCol; count < total && i <= eCol; i++) {
//                 ans.push_back(matrix[sRow][i]);
//                 count++;
//             }
//             sRow++;

//             // Traverse Right Column
//             for (int i = sRow; count < total && i <= eRow; i++) {
//                 ans.push_back(matrix[i][eCol]);
//                 count++;
//             }
//             eCol--;

//             // Traverse Bottom Row
//             for (int i = eCol; count < total && i >= sCol; i--) {
//                 ans.push_back(matrix[eRow][i]);
//                 count++;
//             }
//             eRow--;

//             // Traverse Left Column
//             for (int i = eRow; count < total && i >= sRow; i--) {
//                 ans.push_back(matrix[i][sCol]);
//                 count++;
//             }
//             sCol++;
//         }

//         return ans;
//     }
// };

// // H.W. leetcode 48 :- Rotate Image
// class Solution {
// private:
//     void transpose(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     for(int i = 0; i < n; i++) {
//         for(int j = i+1; j < n; j++) { 
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
// }
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         transpose(matrix);
//         int m = matrix.size();
//         for(int i = 0; i < m; i++ ){
//             int s = 0; 
//             int e = m-1;
//             while(s < e){
//                 swap(matrix[i][s],matrix[i][e]);
//                 s++;
//                 e--;
//             }
//         }

//     }
// };

// // leetcode 74 :- search a 2D matrix
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         // // simple my way but space complexity is increased.
//         // vector<int> ans;
//         // for(int i = 0; i < matrix.size(); i++){
//         //     for(int j = 0; j < matrix[0].size(); j++){
//         //         ans.push_back(matrix[i][j]);
//         //     }
//         // }
//         // if(binary_search(ans.begin(),ans.end(),target)){
//         //     return true;
//         // }
//         // else{
//         //     return false;
//         // }

//         // another way 
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int s = 0; 
//         int e = row*col-1;
        
//         while(s <= e){
//             int m = s + (e-s)/2;
//             int element = matrix[m/col][m%col];
//             if(element == target){
//                 return true;
//             }
//             else if(element < target){
//                 s = m + 1;
//             }
//             else{
//                 e = m-1;
//             }
//         }
//         return false;
//     }
// };


// // leetcode 240 :- search a 2D matrix II 
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         // // my Approach but gives TLE.
//         // vector<int> ans;
//         // for (int i = 0; i < matrix.size(); i++) {
//         //     for (int j = 0; j < matrix[0].size(); j++) {
//         //         ans.push_back(matrix[i][j]);
//         //     }
//         // }

//         // sort(ans.begin(), ans.end());

//         // return binary_search(ans.begin(), ans.end(), target);

//         int row = matrix.size();
//         int col = matrix[0].size();
//         int rowIndex = 0;
//         int colIndex = col - 1;
//         while(rowIndex < row && colIndex >= 0){
//             if( matrix[rowIndex][colIndex] == target) return 1;
//             else if( matrix[rowIndex][colIndex] > target) colIndex--;
//             else rowIndex++;
//         }
//         return 0;
//     }
// };





int main(){
    int arr[3][3];
    cout << "Enter your array :- ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    // cout << "Enter the element to search :- ";
    // int target;
    // cin >> target;
    // if(linearsearch(arr, target, 3, 3)){
    //     cout << "Element Found.";
    // }
    // else{
    //     cout << "Element Not Found.";
    // }

    // // Row sum
    // for(int i = 0; i < 3; i++){
    //     int sum = rowSum(arr, i, 3);
    //     cout << " Sum of row " << i+1 << " is :- " << sum << endl;
    // }

    // int max = maxRowSum(arr, 3, 3);
    // cout << "Maximum row sum is :- " << max;

    // cout << "which type? (enter 0 if in row 1 for column) :- " ;
    // int type;
    // cin >> type;
    // if(type == 0 || type == 1){
    //     wavePrint(arr, 3, 3, type);
    // }
    // else{
    //     cout << "please enter the wave type correctly.";
    // }

    // // transpose
    // transpose(arr);
    // printArray(arr, 3, 3);



    return 0;
}