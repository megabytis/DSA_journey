/*
printing a pattern 

*
* *
* * * 
* * * * 
* * * * *
* * * * * * 
* * * * *
* * * *
* * *
* * 
*

*/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

#include<iostream>
using namespace std;
int p1(int x) 
{
    int i,j,k,a;
    int rn=((x*2)-1);
    int temp=x;
    a=temp-1;

    for(i=1; i<=rn; i++)
    {
        if(i>x && i<=rn)
        {
            for (k=1; k<=a; k++)
            {
                cout<<"* ";
            }
            cout<< "\n";
            a--;
        }

        else
        {
            for (j=1; j<=i; j++)
            {
                cout<<"* ";
            }
            cout<<"\n";
        }
    } 

return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}