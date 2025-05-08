/*
34. Find First and Last Position of Element in Sorted Array

https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/

#include <iostream>
#include <vector>
using namespace std;

class firstAndLastPosition {
    public:
        vector<int> searchrange(vector<int>& nums, int target) {
            vector<int> result;
            int start = 0, end = nums.size()-1;
            int firstOcuurenceIndex = -1, lastOcuurenceIndex = -1;

            while (start <= end) {
                int mid = start + (end - start) / 2 ;
        
                if(nums[mid] == target) {
                    firstOcuurenceIndex = mid ; 
                    end = mid - 1;
                }
                else if(nums[mid] > target) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }

            start = 0, end = nums.size()-1;
            while (start <= end) {
                int midd = start + (end - start) / 2 ;
        
                if(nums[midd] == target) {
                    lastOcuurenceIndex = midd ; 
                    start = midd + 1;
                }
                else if(nums[midd] > target) {
                    end = midd - 1;
                }
                else {
                    start = midd + 1;
                }
            }

            result.push_back(firstOcuurenceIndex);
            result.push_back(lastOcuurenceIndex);

            return result;
        }

};

int main() {
    vector<int> nums = {5,7,7,8,8,10};

    int target = 8;

    firstAndLastPosition ans ;
    vector<int> result = ans.searchrange(nums,target);

    cout << "[" << result[0] << "," << result[1] << "]" << endl;

    return 0;
}