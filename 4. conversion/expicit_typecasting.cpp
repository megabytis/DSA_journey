#include<iostream>
using namespace std ;

/* implicit typecasting i.e. Manual type conversion , i.e. here a programmer 
can change any data_type of variable to any desired data_type Using teh casting operator
which is represented by paranthesis inside it we have to put target datatype
*/

int main()
{
    int n1 = 5 ;
    float n2 = 6.69 ;
    float result = n1 + (int)n2 ; // here i as aprogrammer manually changed it to int as per my need 
    // nd here : (int) :- parathesis + data_type inside it is the casting operator 
    cout << result << endl ;

    int solution = (float)n1 + n2 ; 
    cout << solution << endl ;
    /* Here i explicitely converted n1 to float and finnaly float addition happened 
    nd result came 11.69 but it can't be kept inside "int <variable>" so here again implicit conversion happened by compiler
    automatically from float to int final answer . */
    return 0 ;
}

/* 
TIPS : 
int/int = int
int/float = float
float/float = float
*/