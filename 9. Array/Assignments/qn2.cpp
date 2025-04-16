/*  LeetCode - 724
Finding pivot index of an array .
PIVOT INDEX : index where the sum of all numbers strictly to the lest of the index is equal to the sum of all elemets strictly to the index's right .
*/
// https://leetcode.com/problems/find-pivot-index/

#include<iostream>
#include<vector>
using namespace std ;

int pivotIndex(vector<int> nums) {
    int totalSum = 0;
    int leftSum = 0;
    for(int num : nums) {
        totalSum += num ;
    }

    for(int i = 0 ; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i] ;

        if(leftSum == rightSum) {
            return i ;
        }

        leftSum += nums[i] ;
    }

    return -1 ;
}

int main() {
    vector<int> nums{1,7,3,6,5,6};

    cout<< pivotIndex(nums) << endl ;

    return 0;
}
