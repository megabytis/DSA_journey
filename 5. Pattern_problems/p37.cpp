/*
printing a pattern 

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/


#include<iostream>
using namespace std;
int p1(int x) 
{
    int i,j;
    for(i=1; i<=x; i++ )
    {
        for(j=1; j<=i; j++) 
        {
            cout <<j<<" ";
        }
        cout << "\n";
    }
  return 0;
}

int main() 
{
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}