// 33. Search in Rotated Sorted Array
// https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <vector>
#include <iostream>
using namespace std;

int searchInRotatedArray(vector<int> nums, int target) {
    int length = nums.size();

    // Hardcoding, if array length is 0 or 1 .
    if(length == 0) return -1;
    if(length == 1) return nums[0] == target ? 0 : -1;

    int start = 0, end = length-1;
    int mid = 0;

    /*
     1st i'll have to find the specific point 
     which actually is the 1st elemnt of sorted array before rotating it. 
    */
    int peakPointAtIndex = 0;

    while(start < end) {
        mid = start + (end-start)/2 ;

        if(mid < length - 1 && nums[mid] > nums[mid+1]) {
            peakPointAtIndex = mid;
            break;
        }
        else if(nums[mid] > nums[end]) {
            start = mid + 1 ;
        }
        else {
            end = mid;
        }
    }

    // if(start >= end) peakPointAtIndex = end;
    
    // for choosing start , end point 
    if(target >= nums[0] && target <= nums[peakPointAtIndex]) {
        start = 0;
        end = peakPointAtIndex;
    }
    else {
        start = peakPointAtIndex + 1;
        end = length - 1;
    }

    // now actual BINARY SEARCH
    while (start <= end) {
        mid = start + (end-start)/2 ;

        if(nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target)   {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {13,14,15,16,17,18,19,11,12};//{1};//{4,5,6,7,0,1,2};
    int target = 18;

    cout << searchInRotatedArray(nums, target) << endl;
    return 0;
}
/*
Time Complexity : O(log n)
Space Complexity : O(1)
*/