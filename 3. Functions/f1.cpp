//Write afunction to print couting from 1 to 100

#include<iostream>
using namespace std ;

int counting1to100() ;

int main()
{
    cout << counting1to100() << endl;
    return 0;
}

int counting1to100()
{   
    int i ;
    for(int i=1; i<=100; i++)
    {
        cout << i << " " ;
    }
    return 0 ;
}