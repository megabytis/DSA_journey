/*  MOST MOST MOST IMP qn
Finding factorial of largest number
https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

//This will return answer in string format 
vector<int> FactorialOfLargestNum(int n) {
    vector<int> answer ;
    answer.push_back(1);
    
    
    for(int i = 2; i <= n; i++) {
        int carry = 0;
        for(int j = 0; j < answer.size(); j++) {
            int sum = answer[j] * i + carry ;
            answer[j] = sum % 10 ;
            carry = sum / 10 ;
        }

        while(carry > 0) {
            answer.push_back(carry % 10) ;
            carry /= 10 ;
        }
    }

    reverse(answer.begin(), answer.end()) ;

    return answer ;
}

int main() {
    int n = 5 ;
    vector<int> answer = FactorialOfLargestNum(n) ;

    for(int a : answer) {
        cout << a ;
    }
    cout << endl ;

    return 0 ;
}