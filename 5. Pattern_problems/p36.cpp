/*
printing 
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;

int p1(int no)
{
    int i=1;
    int n = (2*no)-1;

    while (i <= (no))
    {
        int gaps = no-i, k=1;
        int j = i , z=1 ;

        while (k <= gaps)
        {
            cout<<" ";
            k = k + 1;
        }

        int ch = n - (2*gaps)  ;

        while(z <= i)
        {
            cout << j;
            j = j + 1;
            z = z + 1 ;
        }

        j = j - 1;
        z = (ch-1)/2;

        while (z >= 1)
        {
            j = j - 1;
            cout<<j;
            z = z - 1;
        }

        k = 1;
        while (k <= gaps/2)
        {
            cout<<" ";
            k = k + 1;
        }

        cout<<"\n";
        i = i + 1;
    }
    return 0 ;
}

int main()
{
    int n ;
    cout << "Enter a number : ";
    cin >> n ;
    p1(n) ;
    cout << endl ;
    return 0 ;
}