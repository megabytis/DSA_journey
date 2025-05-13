// 69. Sqrt(x)
// https://leetcode.com/problems/sqrtx/description/

#include <asm-generic/errno.h>
#include <iostream>
using namespace std;

/*
SEARCH SPACE PATTERN problem :--
i.e. we r searching in a defined range x, which is 
already given in question, cuz we know that the answer 
would never be greater than x, but will be between 0 to x .
*/

long long square(int n) {
    return (long long)n*n;
} // here long long written to prevent integer overflow

int approxSqrt(int x) {
    int start = 0, end = x;
    int mid;
    
    while (start <= end) {
        mid = start + (end - start) / 2 ;

        if(square(mid) == x) {
            return mid;
        }
        else if (square(mid) > x) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    if(square(mid) < x) return mid;

    return mid-1;
}

double presizeSqrt(int x) {

    int ans = approxSqrt(x);

    // cout << "ans : "<< ans << endl;

    double sqrtAns = (double)ans;
    double finalAns = sqrtAns;
    // cout << "sqrt ans : "<< sqrtAns << endl;

    int precision;
    cout << "Enter till how many digits u want presize value : ";
    cin >> precision;

    double factor = 1;

    for(int i=0; i<precision; i++) {
        factor /= 10.0;

        for (int j=1; j<=9; j++) {
            double add = j * factor;
            // cout << "add : "<< add << endl;
            
            // cout << "sq : "<< (double)(sqrtAns + add)*(sqrtAns + add) << endl;
            
            if((sqrtAns + add)*(sqrtAns + add) < x) {
                finalAns = sqrtAns + add;
                // cout << "final ans : " << finalAns << endl;
            }
            else {
                // cout << "breaking"<< endl;
                break;
            }
        }

        sqrtAns = finalAns;
    }

    // cout << "final answer : " << finalAns << endl;

    return finalAns;

}

int main() {
    int x = 8;
    cout << approxSqrt(x) << endl;
    cout << presizeSqrt(x) << endl;

    return 0;
}
/*
Time complexity : O(log n)
Space Complexity : O(1)
*/