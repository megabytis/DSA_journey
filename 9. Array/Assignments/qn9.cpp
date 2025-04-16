/*
Missing elemets from an array  :- 

LC 448 : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

/* METHOD - 1
Time Complexity : O(n) 
Space complexity : O(1)
*/
int markingVisitedMethod(vector<int> nums) {
    int numsLength = nums.size() ;

    // first marking the availables number's 
    for(int i = 0; i < numsLength; i++) {
        int index = abs(nums[i]) ;

        if(nums[index - 1] > 0) {
            nums[index - 1] *= -1 ;
        }
    }

    cout << "Using makrking visited method : " ;
    for(int i = 0; i < numsLength; i++) {
        if(nums[i] > 0) {
            cout << i+1 << " " ;
        }
    }
    cout << endl ;
    return 0 ;
}

/* METHOD - 2
Time Complexity : O(n) 
Space complexity : O(1)
*/
int sortSwapMethod(vector<int> nums) {
    int i = 0, numsLength = nums.size();
    while(i < numsLength) {
        int index = nums[i] - 1 ;

        if(nums[i] != nums[index]) {
            swap(nums[index], nums[i]) ;
        }
        else {
            ++i ;
        }
        
    }

    cout << "\n Using sort and swap method : " ;
    for(int i = 0; i < numsLength; i++) {
        if(i+1 != nums[i]) {
            cout << i+1 << " " ;
        }
    }
    return 0 ;
}

int main() { //test cases {4,3,2,7,8,2,3,1}, {1,3,5,3,4}
    vector<int> nums = {4,3,2,7,8,2,3,1} ;

    markingVisitedMethod(nums) ;
    sortSwapMethod(nums) ;
    return 0 ;
}