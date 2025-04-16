/* Vector passing to an external function */
#include <iostream>
#include<vector>
using namespace std;

// PASS BY VALUE
// This method creates a copy of vector which is passed to the function.
// Original vector remains unchanged.
// Requires extra memory to store the copy.
// slower
void foo(vector<int> vec) 
{
  
    // Modifying vector inside function
    vec.push_back(8);

    for (auto miku: vec) 
    {
        cout << miku << " ";
    }

    cout << endl;
}

// PASS BY REFERENCE (use & operator)
/* This method passes the reference to the original vector 
and does not create copy .*/
// Changes will reflect in original vector.
// No additional memory is needed.
// Fast
void foo2(vector<int> &vec) 
{

    // Modifying the vector
    vec.push_back(8);

    for (auto i : vec)
    {
        cout << i << " ";
    }

    cout << endl;
}

// PASS BY POINTER (use * operator)
/* This method passes the address of original vector 
and does not create the copy of vector.*/
// Changes will reflect in original vector.
// No additional memory is needed.
// Fast
void foo3(vector<int> *ptr) 
{

    // Modify the original vector
    ptr->push_back(8);

    for (int i = 0; i < ptr->size(); i++) 
    {
      cout << ptr->at(i) << " ";
    }

    cout << endl;
}

int main() 
{
    vector<int> v = {1, 3, 7, 9};

    // Passing the vector to foo()
    foo(v);
    foo2(v);
    foo3(&v);

    for (auto i : v)
        cout << i << " ";
    return 0;
}
