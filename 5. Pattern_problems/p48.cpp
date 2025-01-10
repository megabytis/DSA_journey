/*
printing inverted pyramic but slight different than p40.cpp

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
  int i,j,Rend;
  Rend=((x*2)-1);

  for(i=1; i<=x; i++) 
    {
        for(j=1; j<=Rend ; j++)
        {

            if(j>=i && j<=Rend && j % 2 && i % 2)  
            {
                cout << "*" ;
            }

            else if(j>=i && j<=Rend && j % 2 == 0 && i % 2 == 0)  
            {
                cout << "*" ;
            }

            else
            {
                cout << "  ";
            }  

        }

        cout << "\n";
        Rend--;             
    }
    return 0;
}

int main() 
{
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}