/* 
Missing Number : https://leetcode.com/problems/missing-number/description
*/

#include<iostream>
#include<vector>
using namespace std ;

/*
Time complexity: O(n)
Space complexity : O(1)
*/ 
int bitManupulationMethod(vector<int>& nums) {
    int numsLength  = nums.size() ;
    int expectedSum = 0 , actualSum = 0 ;

    // now calculating actual sum of digits of nums array 
    for(int i = 0 ; i < numsLength ; i++) {
        actualSum += nums[i] ;
    }

    // now calculating expected sum
    expectedSum = numsLength * (numsLength+1) / 2 ;

    return expectedSum - actualSum ;

}

/*
Time complexity: O(n²) + O(n²) = O(n²)
Space complexity : O(1)
*/ 
int bruteForceMethod(vector<int>& nums) {
    int i , j ;
    int length = nums.size() , c = 0 ;

    // 1st sorting the array
    for(i = 0 ; i < length ; i++) {
        for(j = i+1 ; j < length ; j++) {
            if(nums[i] > nums[j]) {
                int temp = nums[i] ;
                nums[i] = nums[j] ;
                nums[j] = temp ;
            }
        }
    }

    // Now Biggest number would be abviously the last number of sorted array 
    for(i = 0 ; i <= length ; i++) {
        c = 0 ;
        for(j = 0 ; j < length ; j++) {
            if(i != nums[j]) { 
                c++ ;
            }
            else if(c == length) {
                break ;
            }
        }
        if(c == length) {
            break ;
        }
    }

    if(c == length) {
        return i ;
    } 
    return 0;
}

int main() {
    vector<int> nums{5,1,0,2,3} ;
    cout << "Missing Number is : " << bruteForceMethod(nums) << endl ;
    cout << "Missing Number is : " << bitManupulationMethod(nums) << endl ;
}