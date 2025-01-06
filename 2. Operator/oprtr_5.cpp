// Using Mathematical operator 

#include<iostream>
using namespace std;

int res(int x, int y)
{ 
    cout<<"a + b = "<<(x+y)<<endl;
    cout<<"a - b = "<<(x-y)<<endl;
    cout<<"a * b = "<<(x*y)<<endl;
    cout<<"a / b = "<<(x/y)<<endl;
    cout<<"a % b = "<<(x%y)<<endl;
    /* % can't be used with float nd double vlaues
    but we can se fmod() func from <cmath> library to use it */
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