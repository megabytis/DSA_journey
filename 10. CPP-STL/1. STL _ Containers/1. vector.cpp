/*
- dynamic array that can grow or shrink in size
- allow fast random access to elements 
- insertion and removal of elements at the end is efficient
- suitable for most scenarios when elements need to eb stored in a linear sequence
*/

#include<iostream>
#include<vector> // Include the vector header file
using namespace std;

// Syntax:-
// vector<data_type> vector_name;

int main()
{
    // Declare a vector of integers
    
    // 1. Basic declaration
    vector<int> v; // Declare an empty vector of integers

    // 2. Declaration with size
    vector<int> v1(5); // Declare a vector of size 5 (default initialized to 0)

    // 3. Declaration with size and initial value
    vector<int> v2(5, 10); // Declare a vector of size 5, initialized with 10


    // 4. Declaration with initializer list
    // vector<int> v3 = {1, 2, 3, 4, 5}; // Declare a vector with initial values

    // 5. Declaration with copy constructor
    vector<int> v4(v2); // Declare a vector as a copy of v2
    // Note: v4 is a copy of v2, so changes to v2 will not affect v4

    // 6. Declaration with range constructor
    vector<int> v5(v2.begin(), v2.end()); // Declare a vector with elements from v2

    // Member functions of vector

    // 1. push_back() - Adds an element to the end of the vector
    v.push_back(10); // Add 10 to the vector
    v.push_back(20); // Add 20 to the vector
    v.push_back(30); // Add 30 to the vector
    v.push_back(40); // Add 40 to the vector
    v.push_back(50); // Add 50 to the vector

    // 2. pop_back() - Removes the last element from the vector
    v.pop_back(); // Remove the last element (50)

    // Iterators -> It is a pointer to the element of the vector
    // To access the elements the iterator is pointing to -> use '*' operator (dereference operator) - it will give the value inside the address/location

    // 3. begin() - Returns an iterator to the first element
    cout << "First element: " << *v.begin() << endl;

    // 4. end() - Returns an iterator to the past-the-end element
    cout << "Last element: " << *(v.end()) << endl; // only this end() will give NULL , so better use end()-1 or back() to get last element 

    // 5. size() - Returns the number of elements in the vector
    cout << "Size of vector: " << v.size() << endl;

    // 6. capacity() - Returns the size of the allocated storage capacity
    cout << "Capacity of vector: " << v.capacity() << endl;

    // 7. empty() - Returns true if the vector is empty
    if (v.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    // 8. front() - Returns a reference to the first element
    cout << "First element: " << v.front() << endl;

    // 9. back() - Returns a reference to the last element
    cout << "Last element: " << v.back() << endl;

    // 10. Accessing elements
    // i. Using square brackets
    cout << "Element at index 0: " << v[0] << endl; // Accessing the first element
    // Note: make sure vector is not empty before using this method and valid index should exist 

    // ii. Using at() method
    cout << "Element at index 1: " << v.at(1) << endl; // Accessing the second element

    // iii. Using iterator
    cout << "Element at index 2: " << *(v.begin() + 2) << endl; // Accessing the third element
    
    // iv. Using range-based for loop
    cout << "Elements in the vector: ";
    for (int i : v) {
        cout << i << " "; // Print each element
    }
    cout << endl;

    // 11. reserve() - Reserves space for a specified number of elements
    vector<int> temp;
    // initially Capacity
    cout << "Initial capacity: " << temp.capacity() << endl;
    // Reserve space for 10 elements
    temp.reserve(10);
    // After reserving capacity
    cout << "Capacity after reserving: " << temp.capacity() << endl;

    // 12. max_size() - Returns the maximum number of elements that the vector can hold
    cout << "Maximum size of vector: " << v.max_size() << endl;

    // 13. clear() - Removes all elements from the vector
    v.clear(); // Clear the vector
    // Note: it does not free the memory allocated for the vector, it just removes the elements
    cout << "Size after clear: " << v.size() << endl; // Size will be 0
    cout << "Capacity after clear: " << v.capacity() << endl; // Capacity will remain the same

    // 14. insert() - Inserts an element at a specified position
    v.insert(v.begin() + 1, 100); // Insert 100 at index 1 (iterator_position, value)

    // 15. erase() - Removes an element at a specified position or range
    v.erase(v.begin() + 1); // Remove the element at index 1 (iterator_position)
    v.erase(v.begin(), v.end()); // Remove all elements (iterator_position, iterator_position)
    // Note: it does not free the memory allocated for the vector, it just removes the elements

    // 16. swap() - Swaps the contents of two vectors
    vector<int> v6;
    v6.push_back(10);
    v6.push_back(20);
    v6.push_back(30);

    vector<int> v7;
    v7.push_back(100);
    v7.push_back(200);
    v7.push_back(300);
    v7.push_back(400);

    cout << "Before swap:" << endl;
    cout << "v6: ";
    for(int x : v6) {
        cout << x << " ";
    }
    cout << endl;
    cout << "v7: ";
    for(int x : v7) {
        cout << x << " ";
    }
    cout << endl;

    // Swap the contents of v6 and v7
    v6.swap(v7);

    cout << "After swap:" << endl;
    cout << "v6: ";
    for(int x : v6) {
        cout << x << " ";
    }
    cout << endl;
    cout << "v7: ";
    for(int x : v7) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v8;
    v8.push_back(10);
    v8.push_back(20);
    v8.push_back(30);
    v8.push_back(40);
    v8.push_back(50);

    // Create an iterator *** IMPORTANT***
    // 1. Declare an iterator
    vector<int>::iterator it; // Declare an iterator for the vector of integers

    // 2. Initialize the iterator
    it = v8.begin(); // Initialize the iterator to point to the first element of the vector

    // 3. Use the iterator to access elements
    cout << "First element using iterator: " << *it << endl; // Dereference the iterator to get the first element

    // 4. Increment the iterator
    it++; // Move the iterator to the next element
    cout << "Second element using iterator: " << *it << endl; // Dereference the iterator to get the second element

    // 5. Decrement the iterator
    it--; // Move the iterator back to the previous element
    cout << "First element using iterator: " << *it << endl; // Dereference the iterator to get the first element

    // 6. Use the iterator in a loop
    cout << "Elements in the vector using iterator: ";
    while(it != v8.end()) {
        cout << *it << " "; // Dereference the iterator to get the element
        it++ ;
    }
    cout << endl;

    // 2D vector
    // Syntax:
    // vector<vector<data_type>> vector_name(rows, vector<data_type>(columns, initial_value));
    
    // 1. Declare a 2D vector of integers
    vector<vector<int>> v9(3, vector<int> (4, 0)); // Declare a 2D vector of size 3x4, initialized with 0
    int totalRows = v9.size() ;
    int totalColumns = v9[0].size() ;
    cout << " V9 totalrows : " << totalRows << ", totalColumns : " << totalColumns << endl ;

    // 2. Jagged 2D vector i.e. unEqual no. of column n each row
    vector<vector<int>> v10; // Declare an empty 2D vector
    v10.push_back(vector<int>(3, 0)); // Add a row of size 3 i.e. 3 columns, initialized with 0
    v10.push_back(vector<int>(2, 0)); // Add a row of size 2, initialized with 0
    v10.push_back(vector<int>(4, 0)); // Add a row of size 4, initialized with 0
    // Note: The rows can have different sizes (jagged array)

    return 0;
}