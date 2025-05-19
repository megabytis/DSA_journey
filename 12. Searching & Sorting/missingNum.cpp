#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
here 
Time Complexity : 
for sort() function : O(n log n)
for Binary search : O(log n)
so overally : O(n log n) + O(log n) = O(n log n)

Space Complexity : O(1)
*/
vector<int> usingBinarySearch(vector<int>& v) {
    int length = v.size();
    int start = 0, end = length - 1;
    int mid;

    sort(v.begin(),v.end());

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (mid != v[mid] && mid-1 == v[mid-1]) {
            v.push_back(mid);
            break;
        }
        else if (mid == v[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return v;
}

int main() {
    vector<int> v = {3,0,1};

    vector<int> ans = usingBinarySearch(v);

    for(int x : ans) cout << x << " ";

    return 0;
}