/*
printing a pattern 

A A A
B B B
C C C

*/

#include<iostream>
using namespace std;
int p1(int x) 
{   int i,j;
    char RowStartChar;

    for(i=0; i<x; i++)
    {   
        RowStartChar='A'+i;

        for(j=1; j<=x; j++)
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