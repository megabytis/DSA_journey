#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class customComparator {
    public:
        bool operator()(int x, int y){
            return x > y;
        }
};

int main() {
    vector<int> v;
    v.push_back(40);
    v.push_back(22);
    v.push_back(34);
    
    // sorting in ascending order
    sort(v.begin(), v.end());
    
    cout << "Ascending sort : " ;
    for(int x : v) cout << x << " " ;

    //sorting in descending order
    sort(v.begin(), v.end(), customComparator());

    cout << "\nDescending sort : " ;
    for(int x : v) cout << x << " " ;


    cout << endl;
    return 0;
}