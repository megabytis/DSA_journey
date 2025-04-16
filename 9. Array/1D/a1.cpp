// finding biggest number presnt in an array

#include<iostream>
#include<climits>
using namespace std ;

int res(int arr[], int len)
{
    int bigNum = INT_MIN ;

    for(int i=0; i<len; i++)
    {
        bigNum = max(bigNum , arr[i]) ;
    }
    return bigNum ;
}

int main()
{
    int n, arr[5] ,i , len ;
    len = 5 ;

    cout << "Start entering numbers : " << endl ;
    
    for(i=0; i<5; i++)
    {
        cin >> arr[i] ;
    }

    cout << "The biggest number among u have entered is : " << res(arr, len) ;

    return 0 ;
}