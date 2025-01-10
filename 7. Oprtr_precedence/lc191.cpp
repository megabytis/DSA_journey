#include<iostream>
using namespace std;

int main() 
{
    int sum=0,n;
    cout<<"Enter a number : ";
    cin>>n;
    for(;n!=0;)
    {
        
        if(n&1)
        {
            sum++;
                
        }
        else
        {
            sum+=0;
        }
        n = n>>1;
        
    }
    cout << sum << endl;
    return 0;
}