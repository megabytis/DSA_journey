// finding wheather N is a prime number or not

#include<iostream>
using namespace std;

int res(int x) 
{   int c=0;
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            c++;
        }
        else
        {
            continue;
        }
    }
    if(c==2)
    {
        cout<<x << " is a Prime Number ."<<endl;
    }
    else
    {
        cout << x<<" is not a Prime Number ."<<endl;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    res(n);
    return 0;
}