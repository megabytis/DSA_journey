// check desired number is present inside array or not 

#include<iostream>
#include<climits>
using namespace std ;

bool res(int arri[], int len, int targetNum)
{
    for(int i=0; i<len; i++)
    {
        if(arri[i] == targetNum)
        {
            return true ;
        }
    }
    return false ;
}

int main()
{
    int n, len , requiredNum , result;
    int arr[5] = {10, 474, 290, 26, 69} ;
    len = 5 ;

    cout << "Enter the number which you want to check : "; 
    cin >> requiredNum ;

    result = res(arr, len, requiredNum) ;

    if(result == 1)
    {
        cout << "\nYes " << requiredNum << " is present inside the array ." << endl ;
    }
    else
    {
        cout << "\nNope " << requiredNum << " isn't present inside the array ." << endl ;
    }

    return 0 ;
}