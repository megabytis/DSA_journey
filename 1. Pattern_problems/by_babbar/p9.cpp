// MOST IMPORTANT //

/*
printing a pattern 

1 
2 3
4 5 6
7 8 9 10

*/

#include<iostream>
using namespace std;
int p1(int x) 
{  int i,j,RowStratNum=1,RowEndNum=0;

    for(i=1; i<=x; i++)

    {   RowEndNum+=i;

        for(j=RowStratNum; j<=RowEndNum; j++)
        {
            cout<<j ;
            cout<<" ";
        }
        cout<<"\n";
        RowStratNum=RowEndNum+1;
        
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