/* sorting 0s and 1s inside an array */

#include<iostream>
#include<algorithm>
using namespace std ;

void sorting_zeros_ones(int arr[], int len) 
{   
    int i,j,k, countZero=0, countOne=0 ;

    //1st counting number of 1s & 0s +nt inside array
    for(i=0; i<len; i++)
    {
        if(arr[i] == 0)
        {
            countZero++ ;
        }
        else
        {
            countOne++ ;
        }
    }
    
    // now sorting 
    //sorting method - 1 : manually

    // for(j=0; j<len; j++)
    // {
    //     if(j < countZero)
    //     {
    //         arr[j] = 0 ;
    //     }
    //     else
    //     {
    //         arr[j] = 1 ;
    //     }
    // }

    // sorting method - 2 : using fill() function 

    fill(arr, arr+countZero, 0) ;
    fill(arr+countZero+1, arr+countZero+countOne, 1) ;

    // sorting method -3 : direct method using sort() function nd <algorithm> header file
    //sort(arr,arr+len) ;
    /*But this will increase time complexity to O(NlogN) which is not good :(  */

    //now displaying sorted array OTBO 0s and 1s
    for(k=0; k<len; k++) 
    {
        cout << arr[k] << " " ;
    }
}

int main()
{
    int arr[7] , len ;
    len = 7 ;
    cout << "Enter a " << len<< " digit binary number : " ;
    for (int i=0; i<len; i++) 
    {
        cin >> arr[i] ;
    }   
    sorting_zeros_ones(arr, len) ;
    cout << endl ;
    return 0 ;
}

/* Most important thing : 

1. Time complexiy :-

Here for 3 time traversing from same 0 to len i.e. 3 times
loop cycled
so, O(n) + O(n) + O(n) = 3 O(n) = O(n) 
i.e. we solved it in linear time complexity :) 

2. Space Complexity :-

inside user deifned function i hardly have taken 5 variables which are 
constant variables 
so space complecity will also become O(1) 
*/