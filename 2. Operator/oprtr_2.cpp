// using BITWISE RightShift and LeftShift operator 

#include<iostream>
using namespace std;

int res(int x, int y)
{ 
    cout<<"a >> b = "<<(x>>y)<<endl;
    /* shortcut to find answer of right shift :-
    x/(2^y) i.e. 2 to the power y i.e. how many right shifting do u want*/
    cout<<"a << b = "<<(x<<y)<<endl;
    /* shortcut to find answer of left shift :- x/(2^y) */
    /* shortcut to find answer of right shift :- x*(2^y) */
    
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