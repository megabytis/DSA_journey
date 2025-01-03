#include<iostream>
using namespace std;

int res(int x)
{ 
    cout<<"pre_inc a = "<<++x<<endl;
    cout<<"a = "<<x<<endl;
    cout<<"post_inc a = "<<x++<<endl;
    cout<<"a = "<<x<<endl;

    return 0;
}

int main() 
{
    int n1;
    cout<<"Enter first number : ";
    cin>>n1;
    res(n1);
    return 0;
}