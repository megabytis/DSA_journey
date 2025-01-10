/*
printing a pattern 

 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *

*/

// METHOD 1 :-

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

      if(j>=i && j<=Rend) 
      {
        cout << "*" ;
      }

      else
      {
        cout << " ";
      }  

    }

    cout << "\n";
    Rend--;             
  }
 return 0;
}

// METHOD 2 :-

// int p1(int x) 
// {   
//     int temp=x;
    
//     for (int i=1; i<=x; i++)
//     {   
//         //for starting spaces
//         for (int j=1; j<i; j++)
//         {
//             cout<<" ";
//         }

//         //for stars
//         int a=((temp*2)-1);
//         for (int m=1; m<=a; m++)
//         {
//             cout<<"*";
//         }
//         temp--;

//         //for end spaces
//         for (int k=1; k<i; k++)
//         {
//             cout<<" ";
//         } 
//       cout<<"\n";
//     }
// return 0;
    
// }

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}