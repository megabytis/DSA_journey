/*
printing a pattern 

1 1 1 1 
2 2 2 2
3 3 3 3
4 4 4 4

*/


#include<iostream>
using namespace std;
int p1(int x) 
{
    for(int i=1; i<=x; i++)
    {
        for(int j=x; j>=1; j--)
        {
            cout<<i;
            cout<<" ";
        }
        cout<<endl;
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