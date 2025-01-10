/*
printing a pattern 

A 
B B
C C C

*/


#include<iostream>
using namespace std;
int p1(int x) 
{   int i,j;
    char RowStartChar;
    //cout<<'A';

    for(i=0; i<x; i++)
    {   RowStartChar='A'+i;

        for(j=0; j<=i; j++)
        {
            cout<<RowStartChar;
            cout<<" ";
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