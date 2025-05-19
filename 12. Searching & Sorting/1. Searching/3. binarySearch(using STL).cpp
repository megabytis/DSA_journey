/*
Here i'll do Binary search using binary_search() built-in function....

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {43,21,65,90,31,18,81,49};
    int length = sizeof(arr)/sizeof(arr[0]);

    //now sorting it, cuz before bianry search array should be sorted ....
    sort(arr,arr + length);

    int target = 90;

    bool ans  = binary_search(arr, arr+length, target);

    cout << ans << endl;

    return 0;
}
/* *** MOST IMPORTANT ***
reference :
https://cplusplus.com/reference/algorithm/binary_search/
*/