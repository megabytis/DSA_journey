/*
Total occurence of target :-
Formula : lastOccurenceIndex - firstOccurence + 1 
simple man !🤦
*/
#include <iostream>
#include <vector>
using namespace std;

void findingFirstOccurence(vector<int> v, int target, int &firstOcuurenceIndex) {
    int start = 0, end = v.size()-1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2 ;

        if(v[mid] == target) {
            firstOcuurenceIndex = mid ; 
            end = mid - 1;
        }
        else if(v[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
}

void findingLastOccurence(vector<int> v, int target, int &lastOcuurenceIndex) {
    int start = 0, end = v.size()-1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2 ;

        if(v[mid] == target) {
            lastOcuurenceIndex = mid ; 
            start = mid + 1;
        }
        else if(v[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
}

int main() {
    vector<int> v = {10,10,15,20,20,20,30,40,50,60};
    // vector<int> v {20,20};
    int firstOcuurenceIndex = 0;
    int lastOcuurenceIndex = 0;

    int target = 20;

    findingLastOccurence(v, target, lastOcuurenceIndex);
    findingFirstOccurence(v, target, firstOcuurenceIndex);

    cout << "Total occurence of "<< target << " is in index "<< lastOcuurenceIndex-firstOcuurenceIndex + 1 << endl;

    return 0;
}
