// sum of all numbers from 0 to user entered number 

#include<iostream>
using namespace std;

int res(int x) 
{
    int sum=0;
    for(int i=0; i<=x; i++)
    {   
        sum+=i;
    }

    cout<<"The sum of all values from 0 to "<<x<< " is " <<sum<<endl;
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    res(n);
    return 0;
}