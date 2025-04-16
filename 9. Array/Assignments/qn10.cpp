/*
Finding  first repeating element
https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/0
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std ;


//This will return answer in string format 
string addVectorNumbersAsString(vector<int>arr1, vector<int>arr2) {
    string answer ;
    int carry = 0;
    int arr1Size = arr1.size(), arr2Size = arr2.size() ;
    int i = arr1Size-1, j = arr2Size-1 ;

    while(i >= 0 && j >= 0) {
        int sum = arr1[i] + arr2[j] + carry ;
        int digitsToKeep = sum % 10 ;
        answer.push_back(digitsToKeep + '0') ;
        carry = sum / 10 ;
        i--, j-- ;
    }

    while(i >= 0) {
        int sum = arr1[i] + 0 + carry ;
        int digitsToKeep = sum % 10 ;
        answer.push_back(digitsToKeep + '0') ;
        carry = sum / 10 ;
        i-- ;
    }

    while(j >= 0) {
        int sum = 0 + arr2[j] + carry ;
        int digitsToKeep = sum % 10 ;
        answer.push_back(digitsToKeep + '0') ;
        carry = sum / 10 ;
        j-- ;
    }

    if(carry) {
        answer.push_back(carry + '0') ;
    }

    while(answer[answer.size()-1] == '0') {
        answer.pop_back() ;
    }

    reverse(answer.begin(), answer.end());

    return answer ;
}


//This will return answer in INT format 
int addVectorNumbersAsAWhole(vector<int>arr1, vector<int>arr2) {
    int arr1Len = arr1.size(), arr1Index = arr1Len-1, arr1FullNumber = 0 ;
    int arr2Len = arr2.size(), arr2Index = arr2Len-1, arr2FullNumber = 0 ;

    //for a vector
    for(int i = 0; i < arr1Len; i++) {
        int num = arr1[i] ;
        arr1FullNumber += pow(10, arr1Index) * num ;

        arr1Index-- ;

        if(arr1[i] > arr1FullNumber) {
            arr1FullNumber = arr1[i] ;
        }
    }

    //for b vector
    for(int i = 0; i < arr2Len; i++) {
        int num = arr2[i] ;
        arr2FullNumber += pow(10, arr2Index) * num ;

        arr2Index-- ;

        if(arr2[i] > arr2FullNumber) {
            arr2FullNumber = arr2[i] ;
        }
    }

    return arr1FullNumber+arr2FullNumber ;
}

int main() {
    vector<int> arr1 = {9,5,4,9} ;
    vector<int> arr2 = {2,1,4} ;

    cout << addVectorNumbersAsAWhole(arr1,arr2) ;

    string result = addVectorNumbersAsString(arr1,arr2);

    cout << endl ;
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] ;
    }
    cout << endl ;

    return 0 ;
}