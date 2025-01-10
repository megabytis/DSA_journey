/*
printing hollow rhombus

      *       
    *   *     
  *       *   
*           * 
  *       *   
    *   *     
      *     

*/


#include<iostream>
using namespace std;

int p1(int x) 
{
    int i, j=1 , StPt , ENdPt , mid = ((x/2)+1);
    StPt = mid+1 , ENdPt = mid-1 ;

    for(i = 1; i <= x; i++)
    {   
        if (i <= mid)
        {  
            StPt-- ;
            ENdPt++ ;
            cout << endl ;

            for (j = 1; j <= x; j++)
            {
                if (j == StPt || j == ENdPt)
                {
                    cout << "* " ;
                }
                else
                {
                    cout << "  " ;
                }
            }

            cout << endl ;
        }

        else
        {   
            StPt ++ ;
            ENdPt -- ;

            for (j = 1; j <= x; j++)
            {
                if (j == StPt || j == ENdPt)
                {
                    cout << "* " ;
                }
                else
                {
                    cout << "  " ;
                }
            }

            cout << endl ;
        }
        
    }

    return 0 ;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    p1(n);
    return 0;
}