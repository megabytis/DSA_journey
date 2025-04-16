/* Printing SUM of Diagonal elements of 2D array
from 1st row's first side to last row's last side,
 that diagonal :)   */

#include<iostream>
#include<vector>
using namespace std;

// void result(vector<vector<int>> arr)
// {   
//     int rowSize = arr.size() ; 
//     int colSize = arr[0].size() ;
//     vector<vector<int>> trans(rowSize,vector<int>(colSize,0)) ;

//     cout << "Original matrix before transposing it :- \n" ;
//     for(int i=0; i<rowSize; i++)
//     {
//         for(int j=0; j<colSize; j++)
//         {
//             cout << arr[i][j] << " " ;
//         }
//         cout << endl ;
//     }
//     cout << endl ;

//     for(int i=0; i<rowSize; i++)
//     {
//         for(int j=0; j<colSize; j++)
//         {
//             trans[j][i] = arr[i][j] ;
//         }
//     }

//     cout << "Transpose of the original 2D matrix :- \n" ;
//     for(int i=0; i<rowSize; i++)
//     {
//         for(int j=0; j<colSize; j++)
//         {
//             cout << trans[i][j] << " " ;
//         }
//         cout << endl ;
//     }
//     cout << endl ;

// }
/*  it's 
Time Complexity : O(n)
Space complexity : O(1)
*/

/* If question will be to solve it without using an xTra vector :) */
void result(vector<vector<int>> arr)
{   
    int rowSize = arr.size() ; 
    int colSize = arr[0].size() ;

    cout << "Original matrix before transposing it :- \n" ;
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }
    cout << endl ;

    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            if(j>i && j<colSize)
            {
                swap(arr[j][i], arr[i][j]) ; // swap function being used 

                //OR we can manually also do :-
                // int temp = arr[i][j] ;
                // arr[i][j] = arr[j][i] ;
                // arr[j][i] = temp ;
                
            }
            else 
            {
                continue ;
            }
        }
    }

    cout << "Transpose of the original 2D matrix :- \n" ;
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }
    cout << endl ;

}

int main()
{
    vector<vector<int>> arr(4, vector<int>(4,0))  ;
    int rn = 4, cn = 4 ;
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