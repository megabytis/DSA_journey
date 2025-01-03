#include<iostream>
using namespace std;

int main()
{
    int a=10;
    if(1)
    {
        int b=20;
        cout<<"The value of a is : "<<a<<endl;
        if(1)
        {
            int c=30;
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
        }
        cout << "The value of b is : " << b << endl;
        cout<<"The value of a is : "<<a<<endl;
    }
        cout<<"The value of a is : "<<a<<endl;

    if(2)
    {
        cout << "The value of a is : " << a << endl;
        if(3)
        {
            int d=40;
            cout << "The value of a is : " << a << endl;
        }
    }
return 0;
}