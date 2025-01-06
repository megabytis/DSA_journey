// using increment decreament operator 

#include<iostream>
using namespace std;

int res(int x)
{ 
    cout<<"pre_inc a = "<<++x<<endl;  // due to +nce of pre_inc , value of x will 1st increase then will be printed 
    cout<<"a = "<<x<<endl;
    cout<<"post_inc a = "<<x++<<endl;  // but here due to +nce of post_inc , value of x will be first printed then it will increase
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