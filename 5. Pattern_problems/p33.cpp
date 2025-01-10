/*
Printing hollow half inverted pyramid 

* * * * * * *
*         *
*       *
*     *
*   *
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
            if(i == x)
            {
                cout << "* " ;
            }
            else if(j == i)
            {
                cout << "* " ;
            }
            else if (j == i - (i-1))
            {
                cout << "* " ;
            }
            else 
            {
                cout << "  " ;
            }
            
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