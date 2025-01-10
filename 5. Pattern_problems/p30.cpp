/*

* * * * *
*       *
*       *
* * * * *

*/

#include<iostream>
using namespace std;

int p1(int length, int bredth)
{   
    int i, j ;
    for(i=1; i<=length; i++)
    {
        for(j=1; j<=bredth; j++)
        {
            if((i>1 && i<length) && (j>1 && j<bredth))
            {
                cout << "  " ;
            }
            else if(i==1 || i==length)
            {
                cout << "* " ;
            }
            else
            {
                cout << "* " ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}

int main() 
{   
    int l , b ;
    cout << "Enter length of hollow rectangle : " ;
    cin >> l ;
    cout << "Enter Bredth of hollow rectangle : " ;
    cin >> b ;
    p1(l,b) ;
    return 0;
}
