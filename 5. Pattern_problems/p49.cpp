/*
 printing a pattern 
 but but but , It is slightly Different than p39.cpp  :)

         *         
       *   *       
     *   *   *     
   *   *   *   *   
 *   *   *   *   * 
 *   *   *   *   * 
   *   *   *   * 
     *   *   * 
       *   * 
         * 


*/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

#include<iostream> 
using namespace std;

int p1(int x) 
{
    int i, j, rEnd;
    rEnd = ((x*2)-1);

    for(i = x; i >= 1; i--) 
    {
        for(j = 1; j <= rEnd; j++) 
        {
            if(j >= i && j <= x && j % 2 && i % 2) 
            {
                cout << "* " ;
            }

            else if (j >= i && j <= x && j % 2 == 0 && i % 2 == 0)
            {
                cout << "* " ;
            }

            else 
            {
                cout << "  ";
            }
        }
        cout << "\n";
        x++;
    }
    return 0 ;
}

int p2(int x) 
{
  int i,j,Rend;
  Rend=((x*2)-1);

  for(i=1; i<=x; i++) 
    {
        for(j=1; j<=Rend ; j++)
        {

            if(j>=i && j<=Rend && j % 2 && i % 2)  
            {
                cout << "* " ;
            }

            else if(j>=i && j<=Rend && j % 2 == 0 && i % 2 == 0)  
            {
                cout << "* " ;
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


int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    p2(n) ;
    return 0;
}