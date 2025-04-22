#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};

    // 1. make_heap: Converts a range into a max-heap.
    make_heap(vec.begin(), vec.end());
    cout << "Max-Heap: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << "\n";

    

    // 2. push_heap: Inserts an element into a max-heap
    vec.push_back(8);
    push_heap(vec.begin(), vec.end());
    cout << "After push_heap(8): ";
    for (int num : vec) {
        cout << num << " ";
    }
    /*
    Aftr push_back(), it we'll iterate it will return 9 6 4 1 5 3 2 1 8, push_back element at the end, it won't follow the heap algo, so to put the push_back new number into heap alog we have to manually add 'push_heap()'
    */
    cout << "\n";



    // 3. pop_heap: Removes the largest element from a max-heap.
    pop_heap(vec.begin(), vec.end());
    int largest = vec.back();
    vec.pop_back(); // actually pop_heap() doesn't removes the elemnt ,, ONLY FINDS, we have to pop it manually using pop_back()
    cout << "Removed largest element: " << largest << "\n";
    cout << "Heap after pop_heap: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << "\n";



    // 4. sort_heap: Sorts a range that represents a max-heap.
    sort_heap(vec.begin(), vec.end());
    cout << "Sorted heap: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}