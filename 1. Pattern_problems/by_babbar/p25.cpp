/*

1 2 3 4
  2 3 4
    3 4
      4

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j,temp;
    for(i=1; i<=x; i++)
    {  
        temp=i; 
        for(j=1; j<=x; j++)
        {   
            if(j>=i && j<=x)
            {
                cout<<temp;
                temp++;
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



int main() 
{
  int n;
  cout << "Enter a number : " ;
  cin >> n;
  p1(n);
  return 0;
}