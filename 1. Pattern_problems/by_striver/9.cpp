/*
printing a pattern 

         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *

*/ 

#include<iostream>
using namespace std;
int p1(int x) {
    int i,j,Rend;
    Rend=((x*2)-1);
        for(i=x; i>=1; i--) {
            for(j=1; j<=Rend; j++) {
                if(j>=i && j<=x) {
                    cout << "*" ;
                }
                else {
                    cout << " ";
                }
            }
            cout << "\n";
            x++;
        }
return 0;
}
int p2(int x) {
    int i,j,Rend;
    //temp=x;
    Rend=((x*2)-1);
        for(i=1; i<=x; i++) {
            for(j=1; j<=Rend ; j++) {
                if(j>=i && j<=Rend) {
                    cout << "*" ;
                }
                else {
                    cout << " ";
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
    p2(n);
    return 0;
}