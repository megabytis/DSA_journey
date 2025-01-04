// sum of all numbers from 0 to user entered number using do while loop
// do..while loop executes the do..statement atleast once before condition checking 

#include<iostream>
using namespace std;

int res(int x) 
{
    int i = 0, sum=0;
    
    do
    {   
        sum+=i;
        i++ ;

    }while(i<=x) ;

    cout<<"The sum of all values from 0 to "<<x<< " is " <<sum<<endl;
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    res(n);
    return 0;
}