/*
printing a pattern 

4 3 2 1 
4 3 2 1
4 3 2 1
4 3 2 1

*/


#include<iostream>
using namespace std;
int p1(int x) 
{
    for(int i=1; i<=x; i++)
    {
        for(int j=x; j>=1; j--)
        {
            cout<<j;
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