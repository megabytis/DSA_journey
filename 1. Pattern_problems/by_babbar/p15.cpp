/*
printing a pattern 

1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7


*/

#include<iostream>
using namespace std;
int p1(int x) 
{   int i,j,RowStartNum,RowEndNum;

    for(i=1; i<=x; i++)
    {   
        RowEndNum=i+x;
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