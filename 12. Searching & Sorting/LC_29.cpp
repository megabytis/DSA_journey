// 29. Divide Two Integers
// https://leetcode.com/problems/divide-two-integers/description/
// P.S. don't use * , / , % operators 🤣

#include <climits>
#include <iostream>
using namespace std;

int finalQuotient(int dividend, int divisor) {
    if (dividend == divisor) return 1;
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    if (divisor == 1) return dividend;
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
        
    long long n = abs((long long)dividend);
    long long d = abs((long long)divisor);
    int ans = 0;

    while (n >= d) {
        int p = 0;
        while (n >= (d << p)) p++;
        p--;
        n -= (d << p);
        ans += (1 << p);
    }    

    return sign * ans;
}

//---------------------OR-----------------
int otherMethod(int a, int b) {
    int sign = 1;
    if(a == INT_MIN && b == -1)return INT_MAX;
    if(a < 0 ^ b < 0) sign = -1;
    long long n = abs((long long)a);
    long long d = abs((long long)b);
    return sign*(n/d);
}

int main() {
    int dividend = 7;
    int divisor = -3;


    cout << finalQuotient(dividend, divisor) << endl;

    cout << otherMethod(dividend, divisor)<< endl;

    return 0;
}