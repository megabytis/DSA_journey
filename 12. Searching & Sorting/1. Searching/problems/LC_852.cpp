// 852. Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
// ⚠️important : time complexity should be O(log n)

#include <climits>
#include <iostream>
using namespace std;

/* BRUTEFORCE METHOD
Time Complexity : O(n)
Space Complexity : O(1)
*/
int targetElementBruteForceMethod(int arr[], int length) {
    int peakElement = INT_MIN;
    int peakElementIndex = -1;
    for(int i=0; i<length; i++) {
        if(arr[i] > peakElement) {
            peakElement = arr[i];
            peakElementIndex = i;
        }
    }
    return peakElementIndex;
}


/* BINARY SEARCH METHOD
Time Complexity : O(log n)
Space Complexity : O(1)
*/
int binarySearchMethod(int arr[], int length) {
    int start = 0 ;
    int end = length - 1;
    int mid = -1;

    while (start < end) {
        mid = start + (end - start) / 2;

        if(arr[mid] > arr[mid+1]) {
            end = mid;
        }
        else {
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    int arr[] = {0,1,0};
    int length = sizeof(arr) / sizeof(arr[0]);

    // cout <<targetElementBruteForceMethod(arr, length) << endl;

    cout << binarySearchMethod(arr,length) << endl;

    return 0;
}