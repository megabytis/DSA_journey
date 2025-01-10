/*
printing half pyramid 

* 
* * 
* * * 
* * * *

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j;
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
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