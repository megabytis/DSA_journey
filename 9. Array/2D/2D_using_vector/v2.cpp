/* Searching a target element */

#include<iostream>
#include<vector>
using namespace std;

bool searchTarget(vector<vector<int>> arr,int targetElement )
{   
    int rowSize = arr.size() ;
    int colSize = arr[0].size() ;

    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            if(arr[i][j] == targetElement)
            {
                return true ;
            }
        }
    }
    return false ;
}
/*  it's 
Time Complexity : O(n^2)
Space complexity : O(1)
*/

int main()
{
    vector<vector<int>> arr(3, vector<int>(3,0))  ;
    int rn = 3, cn = 3 ;
    int rowSize = arr.size() ;
    int colSize = arr[0].size() ;
    int result ;

    for(int i=0; i<rowSize; i++) 
    {
        for(int j=0; j<colSize; j++)
        {
            cout << "Enter value for ("<<i<<","<<j<<") : " ;
            cin >> arr[i][j] ;
        }
        cout << endl ;
    }

    int targetElement ;
    cout << "Enter your target element : " ;
    cin >> targetElement ;
    cout << endl ;
    result = searchTarget(arr, targetElement) ;

    if(result == 1)
    {
        cout << "Yes "<<targetElement <<" is present in the 2D array ." << endl ;
    }
    else
    {
        cout << "No "<< targetElement<<" is not present inside the 2D array ." << endl ;
    }
    return 0 ;
}

