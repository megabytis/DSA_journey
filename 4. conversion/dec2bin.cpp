//finding binary of given decimal number 

#include <iostream>
#include <cmath>
using namespace std ;

//  WIthout using Array

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


// By using Array

void res(int x) 
{   
    int i = 0 , j;
    char arr[50];
    while(x != 0)
    {
        arr[i] = (x & 1) + '0';
        x >>= 1;
        i++;
    }
    arr[i] = '\0';

    for(j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
    cout << endl;
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    res(n); 
    return 0;
}