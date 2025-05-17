// SEARCH IN NEARLY SORTED ARRAY
/*
e.g. FULLY SORTED arr[3,10,20,40,50,70,80]

nd it's ALMOST SORTED version is like ; arr[10,3,40,20,50,80,70]

here  only some numbers are just unsortedly +nt in +1/-1 th position of sorted index's position.

i mean, in fully sorted arr, 20 is +nt at 2nd index,
so in partially sorted arr it can be found in 2+1 th or 2-1 th index .....like this ....

*/
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v, int target, int length) {
    int start = 0, end = length-1;

    while (start <= end) {
        int mid = start + (end-start) / 2;

        if(v[mid] == target) {
            return mid;
        }
        if(v[mid+1] == target) {
            return mid+1;
        }
        if(v[mid-1] == target) {
            return mid-1;
        }
        else if (v[mid] < target) {
            start = mid + 2;
        }
        else {
            end = mid - 2;
        }
    }

    return 0;
}

int main() {

    vector<int> v {10,3,40,20,50,80,70};
    int length = v.size();

    int target = 3;

    cout << binarySearch(v, target, length) << endl;

    return 0;
}