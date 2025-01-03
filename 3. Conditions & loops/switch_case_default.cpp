#include<iostream>
using namespace std ;

int main()
{
    int dn ;
    cout << "Enter the day number between 1-7 : " ;
    cin >> dn ;

    switch(dn)
    {
        case 1 : cout << "It's Sunday . " ;
        break;
        case 2 : cout << "It's Monday . " ;
        break;
        case 3 : cout << "It's Tuesday . " ;
        break;
        case 4 : cout << "It's Wednesday . " ;
        break ;
        case 5 : cout << "It's Thursday. " ;
        break;
        case 6 : cout << "It's Friday. " ;
        break;
        case 7 : cout << "It's Saturday. " ;
        break;
        default : cout << "Andha hai kya ? i've already told you to enter number between 1-7 .";
        break;
    }
    return 0 ;
}