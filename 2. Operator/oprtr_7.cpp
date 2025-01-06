// using logical operators 
#include<iostream>
using namespace std ;

int main()
{
    if(10 && 0)
    {
        cout << "if both true then answer is true" << endl ;
    }
    else if(0 || 0)
    {
        cout << "if any one is true then answer is tru" << endl ;
    }
    else if(!0)
    {
        cout << "0 becomes 1 and 1 or any number becomes 0" << endl ;
    }

    return 0 ;
}