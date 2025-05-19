#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

void printVectorvector(vector<vector<int>>& v3) {
    cout <<"[ ";
    for(int i=0; i<v3.size(); i++) {
        vector<int>temp = v3[i];
        cout << "[" << temp[0] << ","<< temp[1] << "] " ;
    }
    cout << "]" << endl << endl;
}

bool customComparator_V(int &x, int &y) {
    // return x < y; // increasing order sorting
    return x > y; // decreasing order sorting
}

bool customComparator_V3(vector<int>x, vector<int>y) {
    // return x[1] > y[1] ; // increasin order sorting
    return x[1] < y[1] ; // increasin order sorting
}

int main() {
    vector<int>v = {33,22,99,77,11};
    
    // ---------------------1-------------------
    //normal increasing order sorting....
    sort(v.begin(), v.end());

    cout << "Before sorting : " ;
    print(v);

    // ---------------------2----------------------
    // if i wanna sort in decreasing order,
    // then i have to create & add my own custom comparator
    // e.g. :---
    vector<int>v1 = {33,22,99,77,11};

    sort(v1.begin(), v1.end(), customComparator_V);

    cout << "After sorting : " ;
    print(v1);


    // ------------------3--------------------
    // vector of vector / vector insdie vector sorting 

    vector<vector<int>> v3;
    int length; 
    cout << "Enter vector inside vector length  :";
    cin >> length;

    cout << "Start entering vector inside vector : " ;
    for(int i=0; i<length; i++) {
        int p,q;
        cin>>p>>q;
        vector<int>temp;
        temp.push_back(p);
        temp.push_back(q);

        v3.push_back(temp);
        /*
            These will be stored like;
            [ [1,2], [3,4], [5,6] ]
        */
    }
    cout << "Before sorting : " ;
    printVectorvector(v3);

    // --------------------4--------------------
    /*
    Now sorting vector of vector let's suppose on the basis of index's 1'th index number.
    e.g. on [ [0,4], [0,9], [0,6], [0,1] ]
    each index's 1'th index i.e. sorting according to 
    4,9,6,1
    */
    sort(v3.begin(), v3.end(), customComparator_V3);

    cout << "After sorting : " ;
    printVectorvector(v3);


    return -1;
}