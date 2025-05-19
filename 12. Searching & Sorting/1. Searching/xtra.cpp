#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{10,20,20,20,20,30,40,50};

    // to find the first value that is greater than to given value in the vector
    auto it = upper_bound(v.begin(), v.end(),20);

    cout << *it << endl;

    // to find the first value that is greater than or equal to given value in the vector
    it = lower_bound(v.begin(), v.end(), 20); 

    cout << *it << endl;

    // Time Complexity: O(log n)
    // Auxiliary Space: O(1)


    return 0;
}
