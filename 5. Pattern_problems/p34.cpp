/*
Printing 

1
1 2
1 2 3
1 2 3 4

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  
    int i , j;

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j << " " ;
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