#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {44,33,55,22,1};
    
    for(int i=1; i<v.size(); i++) {
        int key = v[i];
        int j = i-1;
        // cout <<"i:"<<i<<" "<<"j: "<<j<<endl;

        while (j >= 0 && v[j] > key) {
            v[j+1] = v[j];
            j--;
            // cout << "v[j+1]: "<< v[j+1]<< " "<< " j : "<<j<< endl;

            // for(int x : v) {
            //     cout << x << " ";
            // }
            // cout << endl;
        }
        v[j+1] = key;

        // for(int x : v) {
        //     cout << x << " ";
        // }
        // cout << endl;
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