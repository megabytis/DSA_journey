/*
printing a pattern 

A 
B C
D E F
G H I J

*/


#include<iostream>
using namespace std;
int p1(int x) 
{   int i,j;
    char RowStartChar='A';

    for(i=1; i<=x; i++)
    { 
        for(j=1; j<=i; j++)
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