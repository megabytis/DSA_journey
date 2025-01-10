// converting BINARY to DECIMALs

#include<iostream>
#include<cmath>
using namespace std ;

void res(int x)
{
  int bit , i = 0 , res = 0 ;
  while(x!=0) {
  bit = x % 10 ;
  res += bit*(pow(2,i)) ;
  x /= 10 ;
  i++ ; }
  
  cout << res << endl ;
}

int main()
{
  int n;
  cout << "Enter a binary number : ";
  cin >> n;
  res(n) ;
  return 0 ;
}
