// find minimun & maximum number +nt inside an 2D array

#include<iostream>
#include<vector>
#include<climits> // For INT_MIN and INT_MAX
using namespace std;

void result(vector<vector<int>> arr)
{   
    int rowSize = arr.size() ;
    int colSize = arr[0].size() ;
    int minVal = INT_MAX ;
    int maxVal = INT_MIN ;

    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            if(arr[i][j] < minVal)
            {
                minVal = arr[i][j] ;
            }
            else if(arr[i][j] > maxVal)
            {
                maxVal = arr[i][j] ;
            }
            else
            {
                continue ;
            }
        }
    }
    cout << "Inside 2D array \n Maximun Value = "<< maxVal
    << "\nMinimum value = "<< minVal << endl ;
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
    }
    cout << endl ;

    result(arr) ;
}

