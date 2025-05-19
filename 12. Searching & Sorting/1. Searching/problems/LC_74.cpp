// 74. Search a 2D Matrix :--
// https://leetcode.com/problems/search-a-2d-matrix/description/

#include <iostream>
#include <vector>
using namespace std;

/*
⚠️⚠️⚠️ IMPORTANT ⚠️⚠️⚠️
1. to convert 2D to 1D ;
    e.g. 4 X 4 matrix ;
    element at arr[1][2] in 2D will be in;
        noOfColumns * rowNum + colNum = 4 * 1 + 2 = 6
    i.e. arr[6] in 1D array

2. to convert 1D to 2D ;
    e.g. 4 X 4 matrix ;
    element at array[6] in 1D will be in;
        rowNum = 6 / noOfColumns = 6 / 4 = 1
        colnum = 6 % noOfColumns = 6 % 4 = 2
    i.e. at arr[1][2] in 2D array
*/
bool search2DMatrix(vector<vector<int>> &matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();
    int totElements = row * col;

    int start = 0;
    int end = totElements - 1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if(matrix[rowIndex][colIndex] == target) {
            return true;
        }
        else if (matrix[rowIndex][colIndex] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return false;
}
/*
Time complexity : O(row * col)
Space complexity : O(1)
*/

int main() {
    vector<vector<int>> matrix = {{1,3,5,7,}, {10,11,16,20}, {23,30,34,60}};
    int target = 3;

    cout << search2DMatrix(matrix, target) << endl;
    return 0;
}