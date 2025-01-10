// Reverse integer (lc7)

#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std ;

int reverse(int x) 
{
    long revNum = 0; // Use long to handle overflow detection
    while (x != 0) 
    {
        int digit = x % 10; 
        x /= 10; 

        // Check for overflow before multiplying by 10
        if (revNum > INT_MAX/10 || (revNum == INT_MAX/10 && digit > 7)) return 0; // Overflow check
        if (revNum < INT_MIN/10 || (revNum == INT_MIN/10 && digit < -8)) return 0; // Underflow check

        revNum = revNum * 10 + digit; 
    }
    return (int)revNum; // Convert back to int
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << reverse(n) << endl; 
    return 0;
}
