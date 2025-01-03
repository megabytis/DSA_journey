//finding binary of given decimal number 

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std ;

int res(int x) 
{   
    long int i = 0 , temp = x, bAnd , lim = 0 ;
    char arr[50] ;
    while(x!=0)
    {
        bAnd = x & 1;
        arr[i] = bAnd + '0' ;
        x>>=1;
        i++ ;
    }
    arr[i] = '\0' ;
    lim = strlen(arr);

    for(i=lim; i>=1; i--)
    {
        cout << arr[i];
    }
return 0 ;
}

//  --------OR--------

// int res(int x) 
// {   
//     int i = 0 , result = 0 , digits=0;
//     while(x!=0)
//     {
//         digits = x & 1;
//         result += (digits * pow(10,i)) ;
//         i++ ;
//         x >>= 1 ;
//     }
//     cout << endl;
//     return result; 
// }


int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << res(n) << endl; // Call the function
    return 0;
}
