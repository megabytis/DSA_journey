#include<iostream>
using namespace std;

int main() 
{
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << "The value of B is : " << b << endl;
    cout << "The value of C is : " << c << endl; 
    return 0;
}
/*
output :
The value of B is : 1
The value of C is : 3
*/