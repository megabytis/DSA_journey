// finding binary of -ve decimal numbers 
//unsolved !! );

#include<iostream>
#include<cstring>
using namespace std ;

int res(signed int x)
{
    signed int i = 0 , tmp = x, bOr , len ;
    char arr[33] ;
    while (tmp != 0)
    {
        bOr = tmp & 0 ;
        arr[i] = bOr + '0' ;
        tmp >>= 1 ;
        i++ ;
    }
    arr[i] = '\0' ;
    len = strlen(arr) ;

    for(i=len; i<32; i++)
    {
        arr[i] = 1 ;
    }
}

int main()
{
    signed int n;
    cout << "Enter a -ve decimal number : ";
    cin >> n;
    cout << res(-n) ;
    cout << endl;
    return 0 ;
}
