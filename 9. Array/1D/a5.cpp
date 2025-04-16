// reverse array numbers 

#include<iostream>
#include<climits>
using namespace std ;

void reverse(int arr[], int len) 
{
    for(int i=len-1; i>=0; i--)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
    int n , arr[5], len;
    len = 5 ;
    cout << "Enter numbers" ;
    cout << endl ;
    for(int i=0; i<len; i++)
    {
        cin >> arr[i] ;
    }

    reverse(arr, len) ;
    cout <<endl ;
    return 0 ;
}