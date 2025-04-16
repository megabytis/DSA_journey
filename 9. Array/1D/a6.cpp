/* finding 2's compliment of a binary number */

#include<iostream>
using namespace std ;

void twosComp(int arr[], int len) 
{   
    int x = arr[len-1] + 1 ;
    for(int i=len-1; i>=0; i--)
    {
        if(x == 1)
        {
            arr[i] = 1 ;
        }
        else
        {
            arr[i] = 0 ;
            x = arr[i-1] + 1 ;
        }
    }
    for(int j=0; j<len; j++)
    {
        cout << arr[j] << " " ;
    }
}

int main()
{
    int arr[4] , len ;
    len = 4 ;
    cout << "Enter a " << len<< " digit binary number : " ;
    for (int i=0; i<len; i++) 
    {
        cin >> arr[i] ;
    }   
    twosComp(arr, len) ;
    cout << endl ;
    return 0 ;
}