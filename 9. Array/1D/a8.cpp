/* creating all possible pairs of each and every number present inside array
 given by user  */

#include<iostream>
using namespace std ;

void twosComp(int arr[], int len) 
{   
    int i,j ;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] 
            << ")" << " " << endl ;
        }
    }
}
int main()
{
    int arr[4] , len ;
    len = 4 ;
    cout << "Enter " << len<< " numbers : " ;
    for (int i=0; i<len; i++) 
    {
        cin >> arr[i] ;
    }   
    twosComp(arr, len) ;
    cout << endl ;
    return 0 ;
}

/* Time Complexity : O(n^2)
Space Complexity : O(n) 
*/