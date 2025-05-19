#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> v;
    v.push_back(89);
    v.push_back(34);
    v.push_back(23);
    v.push_back(21);
    v.push_back(30);

    int target, temp = 0;

    cout << "Enter your target element : ";
    cin >> target;

    for(int i=0; i<v.size(); i++) {
        if(v[i] == target) {
            cout << "Target found at index "<< i << endl;
            temp++;
            break;
        }
    }
    if(temp == 0) cout<< "Target not found :( " << endl;

    return 0;
}
/*
Time complexity : O(n)
Space complexity : O(1)

*/