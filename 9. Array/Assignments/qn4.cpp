/*
Remove Duplicates from sorted array :  https://leetcode.com/problems/remove-duplicates-from-sorted-array/description
*/

#include<iostream>
#include<vector>
using namespace std ;

/*
Complexity
Time complexity: O(n)
Space complexity: O(1)
*/
int twoPointerApproach(vector<int>& nums) {
    int i = 0 , j = 1 , numsLength = nums.size() ;

    while(j < numsLength) {
        if(nums[i] == nums[j]) {
            j++ ;
        }
        else {
            i++ ;
            nums[i] = nums[j] ;
        }
    }
    
    return i+1  ;
}

int main() {
    // tst cases : {0,0,1,1,1,2,2,3,3,4} , {1,1,2}
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    cout << "sorted array length is : " <<twoPointerApproach(nums) << endl ;
    return 0 ;
}