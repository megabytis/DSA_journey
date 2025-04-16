/* 2 ways of Updating values +nt inside an array */

#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Updating values using indexes 3 and 2
    v[3] = 'D';  // (easy to write )

    // -----------OR---------------

    v.at(2) = 'F'; // ( u can ignore this type :) )
      
    cout << v[3] << endl;
    cout << v.at(2);
  
    return 0;
}