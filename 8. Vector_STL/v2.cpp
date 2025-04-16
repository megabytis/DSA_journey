/* Multiple ways of accessing values +nt inside a vector */

//#include <bits/stdc++.h>  :- this will include all header files :)
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Accessing and printing values using indexes
      cout << v[3] << endl;
      cout << v.at(2);
  
    return 0;
}