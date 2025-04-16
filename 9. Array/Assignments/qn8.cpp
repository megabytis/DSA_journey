/*
FInd The Duplicate Number 
LC : 287 :- https://leetcode.com/problems/find-the-duplicate-number/description/
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
int markingVisitedMethod(vector<int> nums) {
    int numsLength = nums.size() ;
    for(int num : nums) { // iterate through values of nums vector
        int index = abs(num) ;

        if(nums[index] < 0) {
            return index ;
        }

        nums[index] *= -1 ;
    }
    return 0 ;
}

/*
Time Complexity: O(n logn)
Space Complexity: O(1)
*/
int findingDuplicateBySorting(vector<int> nums) {
    sort(nums.begin(), nums.end()) ;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == nums[i+1]) {
            return nums[i] ;
        }
    }

    return 0 ;
}

/*
Brute Forcing Method

Time Complexity : O(n^2)
Space Complexity : O(n)
*/
int bruteForcingMethod(vector<int> nums) {
    int numsLength = nums.size() ;

    for(int i = 0; i < numsLength; i++) {
        for(int j = i+1; j < numsLength; j++){
            if(nums[i] == nums[j]) {
                return nums[i] ;
            }
        }
    }
    return 0 ;
}

int main() {
    //test cases : [1,3,4,2,2] , [3,1,3,4,2] , [3,3,3,3,3]
    vector<int> nums{1,3,4,2,2} ;

    cout << " dupliacte num by marking viisted method : " << markingVisitedMethod(nums) << endl ;

    cout << " dupliacte num by Sorting : " << findingDuplicateBySorting(nums) << endl ;

    cout << " dupliacte num using bruteforce : " << bruteForcingMethod(nums) << endl ;

    return 0 ;
}