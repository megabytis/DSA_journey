#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5,2,8,2,0,4};
    

    for(int i = 0; i < v.size() - 1; i++) {
        int smallNum = i;

        for(int j = i + 1; j < v.size(); j++) {
            // cout <<"v[j] : "<< v[j] << endl;

            if(v[j] < v[smallNum]) {
                // cout <<"v[j] : "<< v[j] << endl;
                smallNum = j;
                // cout <<"smallnum :"<<smallNum<<" "<< " v[i] : "<<v[i]<<endl;
            }
        }
        // cout <<"finally smallnum :"<<smallNum<<" "<< " v[i] : "<<v[i]<<endl;
        swap(v[smallNum], v[i]); 

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