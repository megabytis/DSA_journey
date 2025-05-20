// 875. Koko Eating Bananas
// https://leetcode.com/problems/koko-eating-bananas/
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

/* 
Conditions of the GAME :) -----------
1. hours >= pile size (i.e. no. of banana dabba)
2. 
*/


bool canFinish(vector<int>&pile, int h, int k) {
    long long int totalHr = 0;

    for(int i=0; i<pile.size(); i++) {
        totalHr += ceil(pile[i] / (double)k);
    }

    return totalHr <= h;
}
/*
TC : O(n)
*/

int minEatingSpeed(vector<int>& piles, int h) {
    int start = 1;
    int end = *max_element(piles.begin(), piles.end());
    int ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int k = mid;

        if(canFinish(piles, h, k)) {
            ans = k;
            end = mid - 1; // cause we need minimum value so mid-1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}
/*
TC : O(log(Max(piles)))

Ovrall TC : O(log(max(piles))) * O(n) -> O(n * log(max(piles)) 
*/

int main() {
    vector<int>piles = {3,6,7,11};
    int h = 8;

    cout << minEatingSpeed(piles, h);


    return 0;
}