// 540 : Single Element in a sorted Array
/*https://leetcode.com/problems/single-element-in-a-sorted-array/
// 
/*
→ Odd occuring element / Singly occuring element :-
e.g. i/p : [1,1,2,2,3,3,4,5,5,3,3], o/p : 4

--> all element occurs even number of times except one
--> element repeats itself in pairs
--> no pair repeats itself, no number can occur more than 2 times in a single stretch
--> find element that occur Odd times
*/ 
#include <iostream>
#include <vector>
using namespace std;

int findingOddOccuringEl(vector<int> v) {
    int len = v.size();
    int start = 0, end = len-1;
    int mid;
    int answer = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if(start == end) {
            return v[start];
        }

        if (mid % 2 == 0) {
            if(v[mid] == v[mid + 1]) {
                start = mid + 2;
            }
            else if (v[mid] == v[mid - 1]) {
                end = mid - 2;
            }
            else {
                answer = v[mid];
                break;
            }
        }
        else { // i.e. mid % 2 != 0
            if(v[mid] == v[mid - 1]) {
                start = mid + 1;
            }
            else if (v[mid] == v[mid + 1]) {
                end = mid - 1;
            }
            else {
                answer = v[mid];
                break;
            }
        }

    }

    return answer;
}
/*
Time Complexity : O(log n)
Space Complexity : O(1)
*/

int main() {
    vector<int> v = {1,2,2,3,3};

    cout << findingOddOccuringEl(v) << endl;

    return 0;
}