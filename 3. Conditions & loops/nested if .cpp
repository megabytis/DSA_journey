#include<iostream>
using namespace std ;

int main()
{
    int cash ;
    cout << "How much money do you have in cash : " ; 
    cin >> cash ;

    if(cash >= 5000)
    {
        if(cash >= 10000)
        {
            cout << "Ameer saale ! 10-20k udhaar de na ! " << endl ;
        }
        else
        {
            cout << "Please give me cash , i'll repay u online ." << endl;
        }
    }
    else
    {
        cout << "Tu rehne de bhai paisa !" << endl ; 
    }
    return 0 ;
}