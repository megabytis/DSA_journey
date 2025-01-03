#include<iostream>
using namespace std;

int res(int x, int y)
{ 
    cout<<"a & b = "<<(x&y)<<endl;
    cout<<"a | b = "<<(x|y)<<endl;
    cout<<"~a = "<<(~x)<<endl;
    cout<<"~b = "<<(~y)<<endl;
    cout<<"a ^ b = "<<(x^y)<<endl;
    return 0;
}

int main() 
{
    int n1,n2;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    res(n1,n2);
    return 0;
}