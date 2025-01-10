// Write afunction to print prime numbers from 1 to 100

#include<iostream>
using namespace std ;

int prtPrimeNum()
{
    int i,j, c ;
    for(i=1; i<=100; i++)
    {   
        c = 0 ;
        for(j=1; j<=i; j++)
        {
            if(i % j == 0) 
            {
                c++ ;
            }
            else
            {
                continue;
            }

        }
        if(c == 2)
        {
            cout << i << " " ;
        }
        else
        {
            continue;
        }
    
    }
    return 0 ;
}

int main()
{   
    prtPrimeNum() ;
    return 0;
}
