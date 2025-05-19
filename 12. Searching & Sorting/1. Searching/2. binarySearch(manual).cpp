#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* 
Binary search :--
 condition : 
    (i) MONOTONIC FUNCTION
    (ii) array should be sorted, if not sorted then sort it :)
*/ 
int main() {
    vector<int> v {43,21,65,90,31,18,81,49};

    sort(v.begin(), v.end());

    int target;
    cout << "Enter your target element  : ";
    cin >> target ;

    int start=0, end=v.size()-1;
    int x = 0;

    while(start <= end) { 
        int mid = start + (end - start)/2 ;
        /*
            here i could have also written mid = (start + end) / 2
            but didn't written , no doubt that will also work, 
            but in long arrays INTEGER OVERFLOW could occur, 
            so to avoid overflows use start + (end - start)/2
        */

        if(v[mid] == target){
            cout << "Target found at index "<< mid << endl;
            x++;
            break;
        }
        else if(v[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    if(x == 0) cout << "Target not found :( "<< endl;
    return 0;
}
/*
Time complexity : O(log n)
Space complexity : O(1)
*/