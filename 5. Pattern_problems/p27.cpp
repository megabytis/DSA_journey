/*
printing Numeric Palindrome Equilateral Pyramid

       1   
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1
 
*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j,k,SrtNum=x,EndNum=x,MainEnd;
    for(i=x; i>=1; i--)
    {
        for(j=1; j<=((x*2)-1); j++)
        {   
            if(j>=SrtNum && j<=EndNum)
            {
                if(j>x)
                {
                    MainEnd--;
                    cout<<MainEnd;
                }
                else
                {
                    MainEnd=((j-i)+1);
                    cout<<MainEnd;
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
        SrtNum--;
        EndNum++;
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