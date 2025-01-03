/*
printing a pattern 

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/


#include<iostream>
using namespace std;
int p1(int x) 
{
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++)
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