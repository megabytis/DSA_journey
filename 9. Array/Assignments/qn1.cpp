/* Given an array arr[] of positive integers and another integer target. 
Determine if there exists two distinct indices such that the sum of there 
elements is equals to target.*/
// https://www.geeksforgeeks.org/problems/key-pair5616/1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


// using two pointer approach
bool searchTargetBy2ptrApproach(vector<int>arr , int target ) {   
    sort(arr.begin(),arr.end()) ;
        int left = 0 ;
        int right = arr.size()-1 ;
        while(left < right) {
            int sum = arr[left] + arr[right];
        cout << "Checking: " << arr[left] << " + " << arr[right] << " = " << sum << endl;
            if(sum == target) {
                return true ;
            }
            else if(sum < target) {
                left++ ;
            }
            else {
                right-- ;
            }
        }
        return false ;
}

// bool bruteForceApproach(vector<int>arr , int target ) {
//     for (int i=0; i<arr.size(); i++) {
//         for (int j=i+1; j<arr.size(); j++) {
//             if(arr[i]+arr[j] == target) {
//                 cout << "Pair found : " << arr[i] << "+" << " = " << target << endl ;
//                 return true ;
//             }
//         }
//     }
//     return false ;
// }

int main() {
    int target;
    cout << "Enter target : " ;
    cin >> target;
    vector<int> arr{1, 5, 23, 39, 44, 209, 224, 799, 1} ;

    if(searchTargetBy2ptrApproach(arr,target) == true) {
        cout << "True" << endl ;
    }
    else {
        cout << "False" << endl ;
    }

    // if(bruteForceApproach(arr,target)) {
    //     cout << "True" << endl ;
    // }
    // else {
    //     cout << "False" << endl ;
    // }


    return 0;
}
