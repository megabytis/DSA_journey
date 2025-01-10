/*
printing a pattern 

D
C D
B C D
A B C D

*/


#include<iostream>
using namespace std;
int p1(int x) 
{  
    int i, j;
    char PrtChar,StrtChr;
    PrtChar=('A'+(x));
    for(i=1; i<=x; i++)
    {   
        PrtChar-=i;
        for(j=1; j<=i; j++)
        {
            cout<<PrtChar;
            cout<<" ";
            PrtChar++;
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