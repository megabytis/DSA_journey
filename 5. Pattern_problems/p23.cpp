/*

1 1 1 1
  2 2 2
    3 3 
      4
*/

#include<iostream>
using namespace std;
int p1(int x) 
{  
  int i,j,PrtStr;

  for(i=1; i<=x; i++)
  {   
    PrtStr=(x-i)+1;

    for(j=1; j<=x; j++)
    {   
      if(j>=i && j<=x)
      {
        cout<<i;
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