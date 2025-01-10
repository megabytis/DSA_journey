/*
printing a pattern 

1 2 3
4 5 6
7 8 9

*/


#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j,RowStartVal=1,RowEndVal=x;
    for(i=1; i<=x; i++)
    {
        for(j=RowStartVal; j<=RowEndVal; j++)
        {
            cout<<j;
            cout << "     ";
        }
        cout<<"\n";
        RowStartVal+=x;
        RowEndVal+=x;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    p1(n);
    return 0;
}