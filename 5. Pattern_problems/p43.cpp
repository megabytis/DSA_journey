/*
printing a pattern 

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

#include<iostream>
using namespace std;
int p1(int x) 
{
int i,j,k;
for (i=1; i<=x; i++)
{
    if (i%2!=0)
    {
        for (j=1; j<=i; j++ )
        {
            if (j%2!=0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }  
        }
        cout<<"\n";
        
    }
    else
    {
        for (k=0; k<i; k++)
        {
            if (k%2!=0)
            {
                cout<<"1 "; 
            }
            else
            {
                cout<<"0 ";
            }
            
            
        }
        cout<<"\n";
        
    }
    
    
}


return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}