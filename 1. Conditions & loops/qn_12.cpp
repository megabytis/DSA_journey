// print all alphabets from a to z in lowercase

#include <iostream>
using namespace std;

int main()
{  
    char alp = 'a' ;
    while(alp <= 'z')
    {
        cout << alp << " " ;
        alp++ ;
    }
    cout << endl;
    return 0 ;
}