// Kadane's Algorithm
// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> v) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < v.size(); i++) {
        currentSum = max(v[i],currentSum + v[i]);
        maxSum = max(currentSum, maxSum);
    }

    return maxSum;
}

int main() {
    vector<int> v = {-2,-4};

    cout << maxSubArray(v) << endl;

    return 0;
}