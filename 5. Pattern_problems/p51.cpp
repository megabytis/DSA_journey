/*
 printing a pattern 

 input : 5

 1
 2*2
 3*3*3
 4*4*4*4
 5*5*5*5*5

*/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

#include<iostream> 
using namespace std;

int p1(int x) 
{
    for (int i = 0; i < x; i++) {
    for (int j = 0; j < 2 * i + 1; j++) {
      // cout << "$";

      if (j % 2 == 0)
        cout << i + 1;
      else
        cout << "*";
    }
    cout << endl;
  }
  return 0 ;
}


int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    cout << "\n"; 
    p1(n);
    return 0;
}