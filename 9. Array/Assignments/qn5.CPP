/*
Maximun average sub-array : https://leetcode.com/problems/maximum-average-subarray-i/   
*/

#include<iostream>
#include<vector>
using namespace std ;

// SLIDING WINDOW 🪟 Method (Very very IMPORTANT )
/*
Let's take this array:
nums = [1, 12, -5, -6, 50, 3]
k = 4

solution : -

(step i)   [1, 12, -5, -6]  → sum = 1 + 12 + (-5) + (-6) = 2

(step ii) Previous sum = 2
          New sum = 2 - 1 + 50 = 51

(step iii) New sum = 51 - 12 + 3 = 42

(step iv) 
So your subarrays were:
[1,12,-5,-6] → avg = 0.5
[12,-5,-6,50] → avg = 12.75
[-5,-6,50,3] → avg = 10.5

(step v) Answer: 12.75

*/
double slidingWindowMethod(vector<int> nums , int k) {
    double totalSum = 0;
    double currentSum = 0;

    for (int i = 0; i < k; i++) {
        currentSum += nums[i];
    }

    totalSum = currentSum;

    for (int i = k; i < nums.size(); i++) {
        currentSum += nums[i] - nums[i - k];
        totalSum = max(totalSum, currentSum);
    }

    return totalSum / k;
}

// BruteForcing 🤣  --> O(n ^ k) --> Very high time complexity 
int bruteForcing(vector<int> nums , int k) {
    vector<float> bigAvg ;
    int i , j  , numsLength = nums.size();
    float sum , bigAvgNum  ;
    for(i = 0 ; i < numsLength ; i++) {
        sum = 0 ;
        if(numsLength - i >= k) {
            for(j = i ; j < i + k ; j++) {
                sum += nums[j] ;
            }
            // cout << "sum : " << sum << endl ; ;
            bigAvgNum = sum / k ;
            // cout  << "avg : " << bigAvgNum << endl ;
            bigAvg.push_back(bigAvgNum) ;
        }
        else {
            break ;
        }
    }

    float bigNum = bigAvg[0] ;

    for(int i = 0 ; i < bigAvg.size() ; i++) {
        if(bigAvg[i] > bigNum) {
            bigNum = bigAvg[i] ;
        }
    }

    return bigNum ;
}


int main() {
    vector<int> nums{1,12,-5,-6,50,3} ;
    int k = 4 ;

    cout << "Avg is : " << bruteForcing(nums,k) << endl ;
    cout << "Avg is : " << slidingWindowMethod(nums,k) << endl ;
    
    return 0 ;
}