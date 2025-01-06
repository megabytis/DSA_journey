// using bitwise AND (&) , OR ( | ) , NOT (~) , XOR (^)

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

/* Bitwise operators can be used with :

-- for int(short , long, signed, unsigned) 
-- for boolean 
-- for char (cuz char also have it's ASCII int value)
-- but not for float

*/