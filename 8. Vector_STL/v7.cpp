// Different Ways of Printing 

#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> v)
{   
    // method : 1
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl ;

    // Method : 2
    for (auto miku : v)
    {
        cout << miku << " ";
    }
    cout << endl ;
}

int main() 
{
  vector<int> v = {2, 4, 1, 5, 3};
  print(v) ;
  cout << endl ;
        
  return 0;
}
