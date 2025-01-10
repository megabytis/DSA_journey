/*

       1
     2 3
   4 5 6
 7 8 9 10

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j,PrtNum=1;
    
    for(i=1; i<=x; i++)
    {  
        for(j=1; j<=x; j++)
        {   
            if(j>=i && j<=x)
            {
                cout<<PrtNum;
                PrtNum++;
            }
            else
            {
                cout<<" ";
            }
            cout<<" ";
            PrtNum=((x-j)+i);
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