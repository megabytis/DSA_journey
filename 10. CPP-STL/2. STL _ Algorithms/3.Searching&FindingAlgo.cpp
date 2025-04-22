#include <iostream>
#include <vector>
#include <algorithm> // for all the searching algorithms
using namespace std;

int main() {
    // Sorted vector for demo
    vector<int> v = {1, 2, 4, 4, 4, 6, 7, 9};

    // Value we want to search
    int target = 4;

    cout << "Vector: ";
    for (int x : v) cout << x << " ";
    cout << "\n\n";

    // 1. binary_search
    bool found = binary_search(v.begin(), v.end(), target);
    cout << "binary_search: " << (found ? "Found ✅" : "Not Found ❌") << endl;

    // 2. lower_bound
    auto lb = lower_bound(v.begin(), v.end(), target);
    cout << "lower_bound: First >= " << target << " is at index " << lb - v.begin();
    cout << " with value " << *lb << endl;

    // 3. upper_bound
    auto ub = upper_bound(v.begin(), v.end(), target);
    cout << "upper_bound: First > " << target << " is at index " << ub - v.begin();
    cout << " with value " << *ub << endl;

    // 4. equal_range
    auto range = equal_range(v.begin(), v.end(), target);
    cout << "equal_range: Range of " << target << " is from index " 
         << range.first - v.begin() << " to " << range.second - v.begin() << endl;
    cout << "Count of " << target << " = " << range.second - range.first << endl;

    return 0;
}
