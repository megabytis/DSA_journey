// List:–
// 1 Doubly linked list
// 2 Allows fast insertion and deletion
// 3 No random access

#include<iostream>
#include<list>
using namespace std;

// Syntax:–
// list<data_type> list_name;

int main() {

    // Declaration
    // 1. Basic declaration
    list<int> l1;

    // 2. Declaration with size
    list<int> l2(5); // Declare a list of size 5 (default initialized to 0)

    // 3. Declaration with size and initial value
    list<int> l3(5, 10); // Declare a list of size 5, initialized with 10

    // 4. Declaration with initializer list
    list<int> l4{1, 2, 3, 4, 5}; // Declare a list with initial values
    // Note: This may not work in some compilers, as initializer lists are not supported in all versions of C++

    // 5. Declaration with copy constructor
    list<int> l5(l3); // Declare a list as a copy of l4
    // Note: l5 is a copy of l3, so changes to l3 will not affect l5

    // 6. Declaration with range constructor
    list<int> l6(l3.begin(), l3.end()); // Declare a list with elements from l4

    // Member functions of list
    // 1. push_back() – Adds an element to the end of the list
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(60);

    // 2. pop_back() – Removes the last element from the list
    l1.pop_back();

    // 3. push_front() – Adds an element to the front of the list
    l1.push_front(5);
    l1.push_front(4);

    // 4. pop_front() – Removes the first element from the list
    l1.pop_front();

    // 5. size() – Returns the number of elements in the list
    cout << "Size of list: " << l1.size() << endl;
    // Size of list: 6

    // 6. front() – Returns the first element of the list
    cout << "First element: " << l1.front() << endl;
    // First element: 5

    // 7. back() – Returns the last element of the list
    cout << "Last element: " << l1.back() << endl;
    // Last element: 50

    // 8. clear() – Removes all elements from the list
    l1.clear(); // Removes all elements from the list
    cout << "Size of list after clear: " << l1.size() << endl;
    // Size of list after clear: 0

    // 9. empty() – Returns true if the list is empty
    if (l1.empty()) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }
    // List is empty

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(60);

    // 10. begin() – Returns an iterator to the first element
    cout << "First element using iterator: " << *l1.begin() << endl;
    // First element using iterator: 10

    // 11. end() – Returns an iterator to the past-the-end element
    cout << "Last element using iterator: " << *(--l1.end()) << endl;
    // Last element using iterator: 60

    // 12. insert() – Inserts an element at a specific position
    list<int>::iterator it = l1.begin(); // Declare an iterator for the list
    it++; // Move the iterator to the second element

    l1.insert(it, 15); // Insert 15 before the second element
    cout << "After insert : " ;
    for(int x : l1) cout << x <<  " " ;
    cout << endl;

    // 13. erase() – Removes an element at a specific position
    it = l1.begin(); // Reset the iterator to the first element
    it++; // Move the iterator to the second element
    l1.erase(it); // Remove the second element (15)
    cout << "After erase : " ;
    for(int x : l1) cout << x <<  " " ;
    cout << endl;

    // # erase range of elements
    l1.erase(l1.begin(), l1.end()); // Remove all elements from the list
    cout << "Size of list after erase: " << l1.size() << endl;
    // Size of list after erase: 0
    cout << "After erasing entire list : " ;
    for(int x : l1) cout << x <<  " " ;
    cout << endl;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(60);
    // 14. remove() – Removes all elements with a specific value
    cout << "Before remove: ";
    for (int x : l1) {
        cout << x << " ";
    }
    cout << endl;
    // Before remove: 10 20 30 40 50 60 

    l1.remove(10); // Remove all elements with value 10
    cout << "After remove: ";
    for (int x : l1) {
        cout << x << " ";
    }
    cout << endl;
    // After remove: 20 30 40 50 60

    // swap() – Swaps the contents of two lists
    list<int> l7 = {1, 2, 3};
    list<int> l8 = {4, 5, 6};
    cout << "Before swap:" << endl;
    cout << "l7: ";
    for (int x : l7) {
        cout << x << " ";
    }
    /*
    Before swap:
    l7: 1 2 3 
    l8: 4 5 6 
    */
    cout << endl;
    cout << "l8: ";
    for (int x : l8) {
        cout << x << " ";
    }
    cout << endl;

    // Swap the contents of l7 and l8
    l7.swap(l8);
    cout << "After swap:" << endl;
    cout << "l7: ";
    for (int x : l7) {
        cout << x << " ";
    }
    /*
    After swap:
    l7: 4 5 6 
    l8: 1 2 3 
    */
    cout << endl;
    cout << "l8: ";
    for (int x : l8) {
        cout << x << " ";
    }
    cout << endl;

    // Traversing the list
    cout << "Elements in the list: ";
    for (int x : l1) {
        cout << x << " ";
    }
    // Elements in the list: 20 30 40 50 60 
    cout << endl;

    // iterator
    cout << "Elements in the list using iterator: ";

    it = l1.begin();
    while ( it != l1.end() ) {
        cout << *it << " ";
        it++ ;
    }
    // Elements in the list using iterator: 20 30 40 50 60
    cout << endl;

    return 0;
}
