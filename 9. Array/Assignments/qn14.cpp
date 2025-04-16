/*
spiral print a matrix
https://leetcode.com/problems/spiral-matrix/description/
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if(matrix.empty()) return ans;
    
    int rowSize = matrix.size(); 
    int colSize = matrix[0].size();
    int totalNumbers = rowSize * colSize;
    
    int stRow = 0, endRow = rowSize-1;
    int stCol = 0, endCol = colSize-1;
    
    int count = 0;
    while(count < totalNumbers) {
        // Traverse from left to right
        for(int i = stCol; i <= endCol && count < totalNumbers; i++) {
            ans.push_back(matrix[stRow][i]);
            count++;
        }
        stRow++;
        
        // Traverse from top to bottom
        for(int i = stRow; i <= endRow && count < totalNumbers; i++) {
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;
        
        // Traverse from right to left
        for(int i = endCol; i >= stCol && count < totalNumbers; i--) {
            ans.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
        
        // Traverse from bottom to top
        for(int i = endRow; i >= stRow && count < totalNumbers; i--) {
            ans.push_back(matrix[i][stCol]);
            count++;
        }
        stCol++;
    }
    
    return ans;
}

int main() {
    vector<vector<int>> matrix{
        {1,2,3,4,5}, 
        {6,7,8,9,10}, 
        {11,12,13,14,15}, 
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    
    vector<int> result = spiralOrder(matrix);
    
    for(int num : result) {
        cout << num << " ";
    }
    
    return 0;
}