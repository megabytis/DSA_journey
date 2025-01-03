#include<iostream>
using namespace std ;

int main()
{
    int cash ;
    cout << "How much money do you have in cash : " ; 
    cin >> cash ;
    
    if(cash >= 1000)
    {
        cout << "Please give me cash , i'll repay u online ." << endl; 
    }
    else
    {
        cout << "You don't have that much cash , that i need ." << endl;
    }
    return 0 ;
}