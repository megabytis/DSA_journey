/* Diagonal printing of 2D array
from 1st row's first side to last row's last side, that diagonal :)   */
 */

#include<iostream>
using namespace std;

// int traverse(int arr[][3], int rn, int cn)
// {
//     for(int i=0; i<rn; i++)
//     {
//         for(int j=0; j < cn; j++)
//         {
//             if (i == j)
//             {
//                 cout << arr[i][j] << " " ;
//             }
//             else
//             {
//                 cout << "  " ;
//             }
//         }
//          cout << endl ;
//     }
//     cout << endl ;
//     return 0 ;
// }
/*  it's 
Time Complexity : O(n^2)
Space complexity : O(1)
*/

/* But we can solve it in O(n) complexity , 
How ? Bro, we just need same same i & j , so : - */
int traverse(int arr[][3], int rn, int cn)
{
    for(int i=0; i<rn; i++)
    {
        cout << arr[i][i] << " " ;
        cout << endl ;
    }

    cout << endl ;
    return 0 ;
}
/* But here ;
/*  it's 
Time Complexity : O(n)
Space complexity : O(1)
*/

int main()
{
    int arr[3][3] = { {11,22,33}, {44,55,66}, {77,88,99}} ;
    /* or arr[3][2] = {11,22,33,66,55,44}  but the 1st one if best for readability */ 

    int rn = 3, cn = 3 ;
    cout << endl ;
    traverse(arr,rn,cn) ;
    return 0 ;
}

