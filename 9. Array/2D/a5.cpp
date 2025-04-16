/* Searching the target element is presnt inside 
the 2D array or not  
*/


#include<iostream>
using namespace std;

void searchTarget(int arr[][3], int rn, int cn, int targetNum)
{   
    int check = 0 ;

    for(int i=0; i < rn; i++)
    {
        for (int j = 0; j < cn; j++)
        {
            if (arr[i][j] == targetNum)
            {
                check++ ;
            }
        }
    }
    
    if (check > 0)
    {
        cout << "Hurrah !!! " << targetNum << 
        " is present inside the 2D array :) \n" << endl ;
    }
    else
    {
        cout << "Sorry " << targetNum << 
        " is not present inside the 2D Array . :( \n" << endl ;
    }
}

/*  it's 
Time Complexity : O(n^2)
Space complexity : O(1)
*/

int main()
{
    int arr[3][3] = { {11,22,33}, {44,55,66}, {77,88,99}} ;
    int targetNum = 0 ;

    cout << "Enter your target number : " ;
    cin >> targetNum ;

    int rn = 3, cn = 3 ;
    cout << endl ;
    searchTarget(arr,rn,cn, targetNum) ;
    return 0 ;
}

