/*
printing a pattern 

1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1

*/


#include<iostream>
using namespace std;
int p1(int x) {
    int i,j;
    for(i=1; i<=x; i++ ){
        for(j=1; j<=(x-(i-1)); j++) {
            cout <<j<<" ";
        }
        cout << "\n";
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