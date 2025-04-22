#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    // iota: Fills vector with incrementing values starting from 1
    iota(v.begin(), v.end(), 1);
    cout << "Original vector (using iota): ";
    for (int val : v) cout << val << " ";
    cout << "\n";

    // accumulate: Sums all values in the vector
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of elements (using accumulate): " << sum << "\n";

    // inner_product: Dot product of vector with itself
    int dot_product = inner_product(v.begin(), v.end(), v2.begin(), 0);
    cout << "Dot product with itself (using inner_product): " << dot_product << "\n";

    // partial_sum: Prefix sum of the vector
    vector<int> prefix_sum(v2.size());
    partial_sum(v2.begin(), v2.end(), prefix_sum.begin());

    cout << "Prefix sums (using partial_sum): ";
    for (int val : prefix_sum) cout << val << " ";
    cout << "\n";

    return 0;
}
