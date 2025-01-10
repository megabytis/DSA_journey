/*
printing hollow pyramid 

        *         
      *   *       
    *       *     
  *           *   
*   *   *   *   * 

*/


#include<iostream>
using namespace std;

int p1(int x) 
{
    int i, j=1 , StPt = x, ENdPt = x , no ;

    no = (x * 2) - 1 ;

    for(i=1; i <= x; i++)
    {
        while (i < x && j <= no)
        {
            if (j == StPt || j == ENdPt)
            {
                cout << "* " ;
            }
            else
            {
                cout << "  " ;
            }
            j++ ;
        }

        StPt-- ;
        ENdPt++ ;
        //cout << endl ;

        for (j=1; i == x && j <= no; j++)
        {
            if (j % 2)
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

    return 0 ;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    p1(n);
    return 0;
}