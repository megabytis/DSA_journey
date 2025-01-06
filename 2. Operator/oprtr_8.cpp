/* using assignment operators 
+= , -= , *= , /= , %=
*/

#include<iostream>
using namespace std ;

int main()
{
    int a = 5;
    cout << a << endl ;
    
    a += 5 ;  // is same as a = a + 5
    cout << a << endl ;

    a -= 2 ;  // same as a = a - 2
    cout << a << endl ;

    a *= 3 ;  // same as a = a * 3
    cout << a << endl ;

    a /= 4 ;  // same as a = a / 4
    cout << a << endl ;

    a %= 5 ;   //same as a = a % 5
    cout << a << endl ;
}