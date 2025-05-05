#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    vector<Person> people = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    // 1. Basic iterator usage
    auto num_iter = numbers.begin();
    cout << "First element: " << *num_iter << "\n";  // Dereferencing
    ++num_iter;  // Move to next position
    cout << "Second element: " << *num_iter << "\n";

    // 2. Member access with iterators
    auto person_iter = people.begin();
    cout << "First person: " << (*person_iter).name  // Equivalent dereference  
    << ", age " << person_iter->age << "\n"; // Arrow operator can be used instead of  (*person).age

    // 3. Iterator arithmetic
    auto iter1 = numbers.begin();
    auto iter2 = iter1 + 3;
    cout << "Distance between iterators: " << iter2 - iter1 << "\n";
    cout << "Fourth element: " << *iter2 << "\n";

    // 4. Iterator comparison
    if (iter1 != iter2) {
        cout << "Iterators point to different positions\n";
    }

    // 5. Assignment and movement
    iter1 = iter2;  // Assignment
    --iter1;        // Move backward
    cout << "After assignment and movement: " << *iter1 << "\n";

    // 6. Using with algorithms
    cout << "All numbers: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}