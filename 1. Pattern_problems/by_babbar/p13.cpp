/*
printing a pattern 

A B C
A B C
A B C

*/

#include<iostream>
using namespace std;
int p1(int x) 
{   int i,j;
    char RowStartChar;

    for(i=0; i<x; i++)
    {   
        RowStartChar='A';

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