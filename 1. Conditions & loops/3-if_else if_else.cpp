#include<iostream>
using namespace std ;

int main()
{
    int cash ;
    cout << "How much money do you have in cash : " ; 
    cin >> cash ;
    
    if(cash >= 10000)
    {
        cout << "Ameer saale ! 20000 de na udhaar ! :)" << endl; 
    }
    else if(cash < 10000 && cash >= 1000)
    {
        cout << "Please give me cash , i'll repay u online ." << endl;
    }
    else
    {
        cout << "Rehne de bhai paisa !" << endl;
    }
    return 0 ;
}
