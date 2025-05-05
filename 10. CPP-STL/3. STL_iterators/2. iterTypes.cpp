#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>
using namespace std;

int main() {
    // 1. Input Iterator (reading from stream)
    cout << "Enter numbers (Ctrl+D to end): ";
    istream_iterator<int> input_it(cin);
    istream_iterator<int> end_it;
    cout << "You entered: ";
    while (input_it != end_it) {
        cout << *input_it << " ";
        ++input_it;
    }
    cout << "\n\n";

    // 2. Output Iterator (writing to stream)
    ostream_iterator<int> output_it(cout, " ");
    *output_it = 10; ++output_it;
    *output_it = 20; ++output_it;
    cout << "\n\n";

    // 3. Forward Iterator (forward_list)
    forward_list<int> flist = {1, 2, 3};
    forward_list<int>::iterator f_it = flist.end() ;
    // ------OR-------- iterator can be created also like 
    // auto f_it = flist.end() ;
    cout << "Forward list: ";
    while (f_it != flist.end()) {
        cout << *f_it << " ";
        ++f_it;  // Can't decrement forward iterators i.e. --f_it or f_it-- not possible
    }
    cout << "\n";

    // 4. Bidirectional Iterator (list)
    list<int> dlist = {1, 2, 3};
    auto b_it = dlist.end();
    cout << "List backwards: ";
    while (b_it != dlist.begin()) {
        --b_it;  // Can decrement
        cout << *b_it << " ";
        /*
         ⚠️ u noticed?
         her ewe first did --b_it , then print, why ?
         cuz initially iterator was at the end, in a linkd list iterator at final poition can't print final element , first we have to keep it one step backward :)
        */ 
    }
    cout << "\n";

    // 5. Random Access Iterator (vector)
    vector<int> vec = {10, 20, 30, 40, 50};
    auto r_it = vec.begin();
    cout << "Vector elements: ";
    cout << r_it[0] << " ";      // Direct access
    cout << (*r_it + 2) << " ";  // Arbitrary offset
    *r_it += 4;                        // Compound assignment
    cout << *r_it << "\n";

    // Checking iterator category
    cout << "\nIterator categories:\n";
    cout << "vector: " << typeid(iterator_traits<vector<int>::iterator>::iterator_category).name() << "\n";
    cout << "list: " << typeid(iterator_traits<list<int>::iterator>::iterator_category).name() << "\n";
    cout << "forward_list: " << typeid(iterator_traits<forward_list<int>::iterator>::iterator_category).name() << "\n";

    return 0;
}