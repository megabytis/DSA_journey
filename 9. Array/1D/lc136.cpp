// https://leetcode.com/problems/single-number/

#include<iostream>
using namespace std ;

int singleNum(int num[], int len) 
{   
    int sol = 0 ;
    for(int i=0; i<len; i++)
    {
        sol = sol ^ num[i] ;
    }
    return sol ;
}

int main()
{
    int num[]={34,1,23,1,789,34,789} , size , single_num;
    size = 7 ;
    single_num = singleNum(num, size) ; 
    cout << "The final single presence number in array is : " << single_num << endl ;

    return 0 ;
}