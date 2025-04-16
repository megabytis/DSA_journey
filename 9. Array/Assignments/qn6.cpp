/*
LC:75 sort colors: https://leetcode.com/problems/sort-colors/description/
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 


/*
Approach : Dutch National Flag algorithm
The Dutch National Flag algorithm, also known as 3-way partitioning, is an algorithm for sorting an array containing three distinct values. The algorithm was designed to solve the problem of sorting an array containing only 0s, 1s, and 2s, which is similar to the problem in the given question.

The algorithm works by maintaining three pointers: low, mid, and high. The low pointer points to the beginning of the array, the high pointer points to the end of the array, and the mid pointer starts at the beginning of the array and moves through it.

The idea behind the algorithm is to keep all the 0s before the low pointer, all the 2s after the high pointer, and all the 1s between the low and high pointers. The algorithm moves the mid pointer through the array, comparing the value at each position with 1. If the value is 0, the element is swapped with the element at the low pointer, and the low and mid pointers are incremented. If the value is 2, the element is swapped with the element at the high pointer, and the high pointer is decremented. If the value is 1, the mid pointer is simply incremented.

The algorithm terminates when the mid pointer crosses the high pointer, indicating that all the elements have been processed and the array is sorted.

The Dutch National Flag algorithm is called one-pass because it sorts the array in a single pass through the elements. The time complexity of the algorithm is O(n), where n is the size of the array.

Complexity
Time complexity: O(n)
Space complexity: O(1)
*/
int threePointerApproach(vector<int> nums) {
    int low  = 0, mid = 0, high = nums.size()-1 ;

    while(mid <= high) {
        if(nums[mid] == 0) { 
            swap(nums[mid], nums[low]) ;
            low++ ;
            mid++ ;
        }
        else if(nums[mid] == 1) {
            mid++ ;
        }
        else { // i.e. if mid == 2
            swap(nums[mid], nums[high]) ;
            high-- ;
        }
    }

    cout << "using threePointerMethod or Dutch National flag algorithm : " << endl ;
    for(int i = 0 ; i < nums.size() ; i++) {
        cout << nums[i] << endl ;
    }

    cout << endl ;
    return 0 ;
}

// DIrectly using sort() function :)
// Space complexity : O(n) , Tiem complexity : O(n log n)
int usingBuiltInFunction(vector<int>nums) {
    sort(nums.begin() , nums.end()) ;
    
    cout << "using usingBuiltInFunctions : " << endl ;
    for(int i = 0 ; i<nums.size() ; i++) {
        cout << nums[i] << endl ; 
    }
    cout << "\n" << endl ;
    return 0 ; 
}

// Brute Forcing 
// TIme complexity : O(n^2)
int bruteForcingMethod(vector<int> nums) {

    int length = nums.size() ;

    for(int i = 0 ; i < length ; i++) {
        for(int j = i ; j<length ; j++) {
            if(nums[i] > nums[j]) {
                int temp = nums[i] ;
                nums[i] = nums[j] ;
                nums[j] = temp ;
            }
        }
    }

    cout << "using bruteForcingMethod : " << endl ;
    for(int i = 0 ; i< length ; i++) {
        cout << nums[i] << endl ;
    }
    
    return 0 ;
}

int main() {
    // Take test cases : {1,1,0,2,0,1,2,0,1} , {2,0,1} , {2,0,2,1,}
    vector<int> nums{1,1,0,2,0,1,2,0,1} ;
    
    threePointerApproach(nums) ;
    usingBuiltInFunction(nums); 
    bruteForcingMethod(nums) ;
    
    return  0 ;
}