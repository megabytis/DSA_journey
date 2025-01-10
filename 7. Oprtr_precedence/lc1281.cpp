//Subtract the product and sum of digits of an integer (lc1281)

#include<iostream>
using namespace std;

int p1(int x) 
{
    int temp=x, i,s=0,p=1,res=0;
    for(;;)
    {   
        if(x!=0)
        {
            i=x%10;
            s=s+i;
            p=p*i;
            x/=10;
        }
        else
        {
            break;
        }

    }
    cout<<"The substraction of product & sum of " <<temp<<" is "<<(res+=(p-s))<<"\n";
    return res;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}