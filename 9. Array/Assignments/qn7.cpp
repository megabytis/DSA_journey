/*
Move all negative numbers to the left sde of an Array :-
https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

// using Dutch national flag method 
/*
Time complexity : O(n) 
Space complexity  : O(1)
*/
int dutchNationalFLagApproach(vector<int> arr) {
    int arrLength = arr.size() ;
    int low = 0, high = arrLength-1 ;

    while(high >= low) {
        if(arr[low] < 0){
            low++ ;
        }
        else if(arr[high] > 0) {
            high-- ;
        }
        else {
            swap(arr[low], arr[high]) ;z
        }
    }

    cout << "\n Using Dutch National flag approach : " << endl ;
    for(int i = 0 ; i < arrLength ; i++) {
        cout << arr[i] << endl ;
    }
    return  0 ; 
}

// using 2 pointer approach
int twoPtrApproach(vector<int> arr) {
    int i = 0, j = 1 , temp = 0, arrLength = arr.size();
    while(j <= arrLength-1) {
        
        //now swapping the values of i and j place 
        if(arr[j] < arr[i] && arr[j] < 0) {
            temp = arr[i] ;
            arr[i] = arr[j] ;
            arr[j] = temp ;

            // after swapping increating the i's position
            i++ ;
        }
        else {
            j++ ;
        }

    }

    cout << "\n Using 2ptr approach : " << endl ;
    for(i = 0 ; i < arrLength ; i++) {
        cout << arr[i] << endl ;
    }
    return  0 ; 
}


//using built in sort() function :)
/*
Time complexity : O(n log n) 
Space complexity  :O(n)
*/
int sortingUsingSortFunc(vector<int> arr) {
    sort(arr.begin() , arr.end()) ;

    cout<< "Using built-in sort() function :- " << endl ;
    for(int i = 0 ; i < arr.size() ; i++) {
        cout << arr[i] << endl ;
    }
    return 0; 
}

int main() {
    vector<int> arr{14,-89,641,-999,802,2121,-10,21};

    dutchNationalFLagApproach(arr) ;
    twoPtrApproach(arr) ;
    sortingUsingSortFunc(arr) ;
    
    return 0 ;
}