/* Printing SUM of Diagonal elements of 2D array
from 1st row's first side to last row's last side,
 that diagonal :)   */

#include<iostream>
#include<vector>
using namespace std;

void result(vector<vector<int>> arr)
{   
    int rowSize = arr.size() , diagSum = 0 ;
    for(int i=0; i<rowSize; i++)
    {
        diagSum += arr[i][i] ;
    }
    cout <<"Sum of diagonals is "<< diagSum  << endl ;
}
/*  it's 
Time Complexity : O(n)
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