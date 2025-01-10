#include<iostream>
using namespace std ;

/*
implicit typecasting i.e. automatic type conversion by compiler i.e. compiler 
will do such thing so that datatype of a value will convert to 
another datatype but it's actual value won't be altered or can be retained back  */

// example :-
int main()
{   
    // 1. int to float :---------------------

    int n1 = 10 ; 
    float n2 = 3.1415 ;
    cout << n1+n2 << endl ;
    // output : 13.1415
    // here compiler automatically changed n1 from int to float 
    /* catch is , compiler can't change n2 from float to int , otherwise it's value will be loss 
    HOW ? 
    --> e.g. it will reduce from float 3.1415 to maybe int 3 , so 0.1415 value loss .
    but n1 , int 10 converted to float 10.0000 , it's value had not altered .
    */

    cout << int(n1+n2) << endl ;
    // output : 13
    /* here don't think that n1 didn't converted to float , yes it also cnverted here 
    but , as i specifically need the final answer in int that's why after getting 
    13.1415 , it again converted it to int 13 
    */

    // 2. char to int :-----------------------------

    char x = 'B';
    cout << x+1 << endl ;
    // ouput : 67
    /*
    cuz every character is directly we store in ram is stored as ASCII value format
    so B's ascii value is 66 + 1 = 67 simple !
    so what happened , compiler convert char to int 
    */
    cout << char(x+1) << endl ;
    // output : C
    /*
    cuz as we forced it to give answer in char so it first like before convert char to int 
    then asper our requirement , it also converted 1 in char format and then inside memory after addition 66+1=67
    final answer came as 67's ASCII character :)
    */

    // 3. int to char :---------------------------------

    int num = 100 ;
    char y = num ; 
    cout << y << endl ;
    // ouput : d
    /*
    here simply it just convert an integer to it's ASCII character and gave result 
    */ 

} 