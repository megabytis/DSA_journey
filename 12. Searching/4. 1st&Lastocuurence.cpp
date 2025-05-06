/*
Find the first/last occurence i.e. target element can be present,
multiple places in array, retrurn the index where it's seen first ....
*/

/* ⚠️⚠️⚠️ very ℹ️MPORTANAT concept :---------
Store & compute method ***
*/
#include <iostream>
#include <vector>
using namespace std;

void findingFirstOccurence(vector<int> v, int target, int &firstOcuurenceIndex) {
    /*
        here i collected/passed firstOcuurenceIndex as address not actual value,
        cuz, whatever i'll make change to firstOcuurenceIndex will also change in main() ....
    */
    int start = 0, end = v.size()-1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2 ;

        if(v[mid] == target) {
            firstOcuurenceIndex = mid ; 
            /*
                here i found target but stored it in variable,
                then computed it ...
            */
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
    /*
        here i collected/passed firstOcuurenceIndex as address not actual value,
        cuz, whatever i'll make change to firstOcuurenceIndex will also change in main() ....
    */
    int start = 0, end = v.size()-1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2 ;

        if(v[mid] == target) {
            lastOcuurenceIndex = mid ; 
            /*
                here i found target but stored it in variable,
                then computed it ...
            */
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

    findingFirstOccurence(v, target, firstOcuurenceIndex);

    cout << "First occurence of "<< target << " is in index "<< firstOcuurenceIndex << endl;

    findingLastOccurence(v, target, lastOcuurenceIndex);

    cout << "Last occurence of "<< target << " is in index "<< lastOcuurenceIndex << endl;

    return 0;
}