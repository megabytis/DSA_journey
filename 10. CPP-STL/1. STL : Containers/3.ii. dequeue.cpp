/* Deque
- double ended queue
- similar to vectors but allows efficient insertion and removal at both ends .
- suitable when elements need to be inserted or removed frequently from the front or back .
*/

#include<iostream>
#include<deque>
using namespace std;

int main(){
    // Declare a deque of integers
    deque<int> d;

    // 1. push_back() – adds to back
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);

    // 2. push_front() – adds to front
    d.push_front(5);
    d.push_front(1);
    d.push_front(0);

    // 3. pop_back() – removes from back
    d.pop_back();  // removes 40
    d.pop_back();  // removes 30

    // 4. pop_front() – removes from front
    d.pop_front(); // removes 0
    d.pop_front(); // removes 1

    // 5. front()
    cout << "Front element: " << d.front() << endl;

    // 6. back()
    cout << "Back element: " << d.back() << endl;

    // 7. size()
    cout << "Size of deque: " << d.size() << endl;

    // 8. empty()
    cout << "Is deque empty? " << (d.empty() ? "Yes" : "No") << endl;

    // 9. clear()
    d.clear();
    cout << "Size after clear: " << d.size() << endl;

    // 10. swap()
    deque<int> d2;
    d2.push_back(100);
    d2.push_back(200);
    d2.push_back(300);
    d2.push_back(400);

    d.push_back(2424);
    d.push_back(675);

    // For GOD's shake iterator is present here 😀
    deque<int>::iterator it = d.begin() ;
    cout << "Deque 1: ";
    while(it != d.end()) {
        cout << *it << " "; 
        it++ ;
    }cout << endl;

    cout << "Deque 2: ";
    for(auto it = d2.begin(); it != d2.end(); it++) cout << *it << " ";
    cout << endl;

    d.swap(d2);

    cout << "After swapping:\n";
    cout << "Deque 1: ";
    for(auto it = d.begin(); it != d.end(); it++) cout << *it << " ";
    cout << endl;

    cout << "Deque 2: ";
    for(auto it = d2.begin(); it != d2.end(); it++) cout << *it << " ";
    cout << endl;

    // 11. at()
    cout << "Element at index 1: " << d.at(1) << endl;
    cout << "Element at index 3: " << d.at(3) << endl;

    // 12. insert()
    d.insert(d.begin() + 1, 15);
    cout << "After inserting 15 at index 1: ";
    for(auto it = d.begin(); it != d.end(); it++) cout << *it << " ";
    cout << endl;

    // 13. erase()
    d.erase(d.begin() + 2); // one element
    cout << "After erasing index 2: ";
    for(auto it = d.begin(); it != d.end(); it++) cout << *it << " ";
    cout << endl;

    d.erase(d.begin() + 1, d.begin() + 3); // range
    cout << "After erasing index 1 to 3: ";
    for(auto it = d.begin(); it != d.end(); it++) cout << *it << " ";
    cout << endl;

    // 14. [] operator
    cout << "Element at index 0: " << d[0] << endl;

    // 15. Iterators
    cout << "Deque using iterators: ";
    for(auto it = d.begin(); it != d.end(); it++) cout << *it << " ";
    cout << endl;

    cout << "Deque using reverse iterators: ";
    for(auto it = d.rbegin(); it != d.rend(); it++) cout << *it << " ";
    cout << endl;

    return 0;
}
