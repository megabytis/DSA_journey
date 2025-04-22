#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a = 15, b = 20;

    // Using min and max
    cout << "min(" << a << ", " << b << ") = " << min(a, b) << endl;
    cout << "max(" << a << ", " << b << ") = " << max(a, b) << endl;

    // Vector for min_element and max_element
    vector<int> v = {5, 1, 8, 3, 9, 2};

    // Print vector
    cout << "Vector: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // Using min_element
    auto minIt = min_element(v.begin(), v.end());
    cout << "min_element: " << *minIt << " at index " << minIt - v.begin() << endl;

    // Using max_element
    auto maxIt = max_element(v.begin(), v.end());
    cout << "max_element: " << *maxIt << " at index " << maxIt - v.begin() << endl;

    return 0;
}
