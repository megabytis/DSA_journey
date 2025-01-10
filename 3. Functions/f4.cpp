//Write a function to check wheather someone is eligible to vote or not 

#include<iostream>
using namespace std ;

int eligibleForVote(int age)
{
    if(age>=18)
    {
        cout << "You are eligible to vote " << endl ;
    }
    else
    {
        cout << "You are not eligible to vote ." << endl ;
    }
    return 0 ;
}

int main()
{
    int n ;
    cout << "Enter your age : " ;
    cin >> n ;
    eligibleForVote(n) ;
}