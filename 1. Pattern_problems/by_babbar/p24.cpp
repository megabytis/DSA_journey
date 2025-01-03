/*

    1
   22
  333
 4444

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j,prt=1;
    for(i=x; i>=1; i--)
    {   
        for(j=1; j<=x; j++)
        {   
            if(j>=i && j<=x)
            {
                cout<<prt;
            }
            else
            {
                cout<<" ";
            }
            cout<<" ";
        }
        cout<<"\n";
        prt++;
    }
    return 0;
}



int main() 
{
  int n;
  cout << "Enter a number : " ;
  cin >> n;
  p1(n);
  return 0;
}