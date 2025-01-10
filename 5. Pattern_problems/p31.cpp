/*
Printing 

* * * * * 
* * * * 
* * * 
* * 
*

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  
    int i , j;

    for(i=x; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "* " ;
        }
        cout << endl ;
    }
    return 0 ;
}


int main() 
{   
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    cout << endl ;
    p1(n);
    return 0;
}