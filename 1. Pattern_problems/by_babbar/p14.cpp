/*
printing a pattern 

A B C
D E F
G H I

*/


#include<iostream>
using namespace std;
int p1(int x) 
{   int i,j;
    char RowStartChar,RowEndChar;

    for(i=0; i<x; i++)
    {   RowEndChar=x*i;
        RowStartChar='A'+RowEndChar;

        for(j=1; j<=x; j++)
        {
            cout<<RowStartChar;
            cout<<" ";
            RowStartChar+=1;
        }
        cout<<"\n";
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