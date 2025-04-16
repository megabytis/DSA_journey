/* Diagonal printing of 2D array 
from 1st row's last side to last row's first side , 
that diagonal :)   */

#include<iostream>
using namespace std;

int traverse(int arr[][3], int rn, int cn)
{   
    int startNum = 0, endNum = cn-1 ;

    for(int i = 0; i < rn; i++)
    {
        for(int j =  0; j < cn; j++)
        {
            if (i == startNum && j == endNum)
            {
                cout << arr[i][j] << " " ;
            }
            else
            {
                cout << "  " ;
            }
        }
        startNum++ ;
        endNum-- ;

        cout << endl ;
    }
    cout << endl ;
    return 0 ;
}

/*  it's 
Time Complexity : O(n^2)
Space complexity : O(1)
*/

int main()
{
    int arr[3][3] = { {10,20,30}, {110,220,330}, {1110,2220,3330}} ;
    int rn = 3, cn = 3 ;
    cout << endl ;
    traverse(arr,rn,cn) ;
    return 0 ;
}

