/*
Common elements in 3 sorted array 
gfg : https://www.geeksforgeeks.org/problems/common-elements1132/1
*/

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std ;

int alternativeMethod(vector<int> arr1, vector<int> arr2, vector<int> arr3) {
    int i=0, j=0, k=0 ;
    vector<int> ans ;
    set<int> st ;

    while(i < arr1.size() && j<arr2.size() && k<arr3.size()) {
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            st.insert(arr1[i]) ;
            i++, j++, k++;
        }
        else if(arr1[i] < arr2[j]) {
            i++; 
        }
        else if(arr2[j] < arr3[k]) {
            j++; 
        }
        else {
            k++;
        }
    }

    for(auto s : st) {
        ans.push_back(s) ;
    }

    for(int i=0; i<ans.size() ; i++) {
        cout << ans[i] << " " ;
    }

    return 0 ;
}

int main() {
    vector<int> arr1 , arr2, arr3;
    arr1 = {1, 5, 10, 20, 40, 80} , arr2 = {6, 7, 20, 80, 100} , arr3 = {3, 4, 15, 20, 30, 70, 80, 120} ;

    alternativeMethod(arr1, arr2, arr3) ;

    return 0 ; 
}