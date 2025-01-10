/*
printing a pattern 

1 
2 2
3 3 3
4 4 4 4

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j;
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<i;
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