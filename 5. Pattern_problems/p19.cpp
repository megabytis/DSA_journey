/*
printing a pattern 

A 
B C
C D E
D E F G

*/


#include<iostream>
using namespace std;
int p1(int x) 
{  
    int i,j;
    char StartChar;
    for(i=1; i<=x; i++)
    {  
        for(j=1; j<=i; j++)
        {   
            StartChar=('A'+i+j-2);
            cout<<StartChar;
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