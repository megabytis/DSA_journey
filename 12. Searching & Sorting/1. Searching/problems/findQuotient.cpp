/*Given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any ” / “ and ” % “ operators

e.g :-----

Input: dividend = 10, divisor = 2
Output: 5
Explanation: 10/2 = 5.

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333… which is truncated to 3.

Input: dividend = 10, divisor = -2
Output: -5
Explanation: 10/-2 = -5
*/

#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor) {
    int start = 0;
    int end = dividend;
    int result = -1;

    while(start <= end) {
        int mid = start + ((end-start)>>1);

        if((divisor * mid) == dividend) {
            return mid;
        }
        else if((divisor*mid) < dividend) {
            //store and compute
            result = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }

    return result;
}

/*
Time Complexity : O(log n)
Space Complexity : O(1)
*/

int main() {
    int dividend = 10;
    int divisor = -2;

    int result = getQuotient(abs(dividend), abs(divisor));

    // if both dividend nd divisor r either +ve or-ve, resultwer will be +ve
    // if by any chance either divisor or dividend is -ve, then resultwer would be -ve
    if((dividend <0 && divisor>0) || (dividend >0 && divisor<0)) {
    result = 0-result;
   }

   cout << result << endl;

   return 0;
}