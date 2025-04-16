// printing numbers of zeros and 1's presnt in an array

#include<iostream>
#include<climits>
using namespace std ;

void printZeroesAndOnes(int arr[], int n) 
{
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0; i<n; i++) 
    {
        int currElement = arr[i];
        
        if(currElement == 0) {
            zeroCount++;
        }
        if(currElement == 1) {
            oneCount++;
        }
    }
    cout << "Total Zeroes: " << zeroCount << endl;
    cout << "Total Ones: " << oneCount << endl;
}

int main()
{
    int n , arr[5], len;
    len = 5 ;
    cout << "Enter binary digits to an array : " ;

    for(int i=0; i<len; i++)
    {
        cin >> arr[i] ;
    }

    printZeroesAndOnes(arr, len) ;
}