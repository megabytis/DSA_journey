/* Row-Wise Traversal 2D array */

#include<iostream>
using namespace std;

int traverse(int arr[][2], int rn, int cn)
{
    for(int i=0; i<rn; i++)
    {
        for(int j=0; j < cn; j++)
        {
            cout << arr[i][j] << " " ;
        }
         cout << endl ;
    }
    cout << endl ;
    return 0 ;
}

int main()
{
    int arr[3][2] = { {11,22}, {33,66}, {55,44}} ;
    /* or arr[3][2] = {11,22,33,66,55,44}  but the 1st one if best for readability */ 

    int rn = 3, cn = 2 ;
    cout << endl ;
    traverse(arr,rn,cn) ;
    return 0 ;
}

/* 
Time Complexity : O(n^2)
Space complexity : O(1)
*/