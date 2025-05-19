#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5,2,8,2,0,4};

    for(int i = 0; i < v.size(); i++) {

        for(int j = 0 ; j < v.size()-i-1; j++) {

            if(v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
        
    }

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
        


    return 0;
}
/*
Time Complexity : O(n^2)
Space comeplcity : O(1)
*/