// Different Ways to Copy a Vector in C++
#include <iostream>
#include<vector>
using namespace std;

void ans(vector<int> v)
{
  for (auto i : v)
  {
    cout << i << " ";
  }
    cout << endl ;
}

int main() 
{
  vector<int> v1 = {2, 4, 1, 5, 3};
  cout << "in v1 :" << endl ;
  ans(v1) ;
  cout << endl ;

  // Assigning the vector v1 to vector v2
  vector<int> v2 = v1;
  cout << "in v2 :" << endl ;
  ans(v2) ;
  cout << endl ;

 //------------------------OR-----------------------

  // Copying vector v1 into vector v2
  vector<int> v3(v1);
  cout << "in v3 :" << endl ;
  ans(v3) ;
  cout << endl ;

  //------------------------OR-----------------------

  // using copy() funvtion
  vector<int> v4 ;
  copy(v1.begin(), v1.end(), back_inserter(v4));
  cout << "in v4 :" << endl ;
  ans(v4) ;
  cout << endl ;
  //------------------------OR-----------------------

  // using vector assign 
  vector<int> v5 ;
  v5.assign(v1.begin(), v1.end());
  cout << "in v5 :" << endl ;
  ans(v5) ;
  cout << endl ;

  //------------------------OR-----------------------

  // using vector insert 
  vector<int> v6 ;
  v6.insert(v6.begin(), v1.begin(), v1.end());
  cout << "in v6 :" << endl ;
  ans(v6) ;
  cout << endl ;

  //------------------------OR-----------------------

  // using vector push_back
  vector<int> v7 ; 
  for (auto i : v1)
  {
    v7.push_back(i);
  }
  cout << "in v7 :" << endl ;
  ans(v7) ;
  cout << endl ;
        
  return 0;
}
