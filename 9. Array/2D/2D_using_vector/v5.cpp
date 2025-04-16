// finding coloumn-wise sum of elements

#include<iostream>
#include<vector>
using namespace std;

void result(vector<vector<int>> arr)
{   
    int rowSize = arr.size() ;
    int colSize = arr[0].size() ;
    int rowSum = 0 ;

    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            rowSum += arr[j][i] ;
        }
        cout << "Sum of elements of coloumn index " 
        <<i<<" is "<<rowSum << endl ;
        rowSum = 0 ;
    }
}
/*  it's 
Time Complexity : O(rowSize*colSize) = O(n^2)
Space complexity : O(1)
*/

int main()
{
    vector<vector<int>> arr(3, vector<int>(3,0))  ;
    int rn = 3, cn = 3 ;
    int rowSize = arr.size() ;
    int colSize = arr[0].size() ;

    for(int i=0; i<rowSize; i++) 
    {
        for(int j=0; j<colSize; j++)
        {
            cout << "Enter value for ("<<i<<","<<j<<") : " ;
            cin >> arr[i][j] ;
        }
        cout << endl ;
    }
    cout << endl ;

    result(arr) ;
}

