/*
Wave print a matrix
https://www.naukri.com/code360/problems/print-like-a-wave_893268
*/

#include<iostream>
#include<vector>
using namespace std;

/*
Time Complexity : O(n^2)
Space Coplexity : O()
*/
int wavePrintMatrix(vector<vector<int>> arr) {
    int arrRowSize = arr.size() ;
    int arrColSize = arr[0].size() ;
    for(int j = 0; j < arrColSize; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < arrRowSize; i++) {
                cout << arr[i][j] << " " ;
            }
        }
        else {
            for(int i = arrRowSize-1; i >= 0; i--) {
                cout << arr[i][j] << " " ;
            }
        }
    }

    return 0 ;
}

int main() {
    vector<vector<int>> arr{
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12}, 
        {13,14,15,16},
        {17,18,19,20}
    } ;

    wavePrintMatrix(arr) ;
}