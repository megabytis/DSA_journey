// print all alphabets from A to Z in uppercase

#include <iostream>
using namespace std;

int main()
{  
    char alp = 'A' ;
    while(alp <= 'Z')
    {
        cout << alp << " " ;
        alp++ ;
    }
    cout << endl;
    return 0 ;
}