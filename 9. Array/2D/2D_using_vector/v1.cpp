// 2D array using Vector STL 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(4, vector<int>(3,0)) ;
    int rowSize = arr.size() ;
    int colSize = arr[0].size() ;


    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++){
            cout << "Enter value for ("<<i<<","<<j<<") : " ;
            cin >> arr[i][j] ;
        }
        cout << endl ;
    }

    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }
    
}

/*  it's 
Time Complexity : O(n^2) + O(n) = O(n^2)
Space complexity : O(1)
*/