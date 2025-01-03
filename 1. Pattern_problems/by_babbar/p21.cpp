/*
printing a pattern 

       *
     * *
   * * *
 * * * *

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j,PrtStr;
    for(i=1; i<=x; i++)
    {   
        PrtStr=(x-i)+1;
        for(j=1; j<=x; j++)
        {   
            if(j>=PrtStr && j<=x)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    p1(n);
    return 0;
}