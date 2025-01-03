/*
printing a pattern 

1      1
12    21
123  321 
12344321

*/

#include<iostream>
using namespace std;

int p1(int x)
{
    int temp=2*(x-1);
    for(int i=1; i<=x; i++)
    {   
        //number
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }

        //spaces
        for(int k=1; k<=temp; k++)
        {
            cout<<" ";
        }

        //number
        for(int j=i; j>=1; j--)
        {
            cout<<j;
        }

    }
    cout<<"\n";
    temp-=2;
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}