/*
printing a pattern 

1
2 3
3 4 5
4 5 6 7

*/

#include<iostream>
using namespace std;

int p1(int x) 
{  int i,j,TotEndNum,RowEndNum;
    TotEndNum=(x*2)-1;
    for(i=1; i<=x; i++)
    {   
        RowEndNum=(i*2)-1;

        for(j=i; j<=RowEndNum; j++)
        {
            cout<<j;
            cout<<" ";
        }
        cout<<"\n";
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