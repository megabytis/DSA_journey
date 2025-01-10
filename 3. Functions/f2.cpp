//Write afunction to find simple interest

#include<iostream>
using namespace std ;

int simpInt(int p, int r, int t)
{
    return (p*r*t)/100 ;
}

int main()
{   
    int p , r, t ;
    cout << "Enter your principal amount : " ;
    cin >> p ;
    cout << "Enter the no of years to invest : " ;
    cin >> t ;
    cout << "ENter the rate of interest per year : " ;
    cin >> r; 
    cout << "\nThe final interest Amount is  : " << simpInt(p,r,t) << endl ;
    return 0;
}
