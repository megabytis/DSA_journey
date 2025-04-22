#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {3, 4, 5, 6, 7};
    vector<int> result;

    // ⚠️⚠️⚠️ MOST IMPORTANT ⚠️⚠️⚠️: here inside vectors numbers should be in sorted order, otherwise set functions give wrong results .

    // 1. Union of A and B
    set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(result));
    cout << "Union: ";
    for (int num : result) cout << num << " ";
    cout << "\n";
    result.clear();

    // 2. Intersection of A and B
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(result));
    cout << "Intersection: ";
    for (int num : result) cout << num << " ";
    cout << "\n";
    result.clear();

    // 3. Difference (A - B)
    set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(result));
    cout << "Difference (A - B): ";
    for (int num : result) cout << num << " ";
    cout << "\n";
    result.clear();

    // 4. Symmetric Difference
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(result));
    cout << "Symmetric Difference: ";
    for (int num : result) cout << num << " ";
    cout << "\n";

    return 0;
}