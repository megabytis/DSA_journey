/*
DABBANG QUESTION !!!

1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
using namespace std;

int p1(int x)
{
    int i,j,k,temp=0;
    for(i=x; i>=1; i--)
    {
        //strating numbers 
        for(j=1; j<=i; j++)
        {
            cout<<j;
        }

        //mid stars
        for(j=1; j<=temp; j++)
        {
            cout<<"*";
        }
        temp+=2;

        //end numbers 
        for(j=i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
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