#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void makeDoubleOfTheNumber(int num) {
    cout << num * 2 << " " ;
}

bool checkOdd(int num) {
    return num % 2 != 0 ;
}

int main() {
    vector<int> v{10,99, 20, 33,87,40, 40, 20};

    // 1. std::for_each: Applies a function to each element in a range.
    for_each(v.begin(), v.end(), makeDoubleOfTheNumber );

    // 2. std::find: Searches for a specific element in a range.
    int target = 40 ;
    auto it = find(v.begin(), v.end(), target) ;
    cout << *it << endl ;

    // 3. std::find_if: Searches for the first element that satisfies a given predicate.
    auto a = find_if(v.begin(), v.end(), checkOdd) ;
    cout << "First odd number in vector is : "<< *a << endl ;

    // 4. std::count: Counts the occurrences of a value in a range.
    int result = count(v.begin(), v.end(), target) ;
    cout << target << " is present " << result << " times in vector ." << endl ;

    // 5. std::count_if: Counts the elements that satisfy a given predicate.
    int b = count_if(v.begin(), v.end(), checkOdd) ;
    cout << "Total odd numbers in vector : " << b << endl ;

    // 6. std::sort: Sorts the elements in a range in ascending order.
    cout << "Before sorting : " ;
    for(int x : v) cout << x << " " ;

    cout << "\nAfter sorting : ";
    sort(v.begin(), v.end());
    for(int x : v) cout << x << " " ;
    cout << endl ;

    //7. std::reverse: Reverses the order of elements in a range.
    cout << "Before Reverse : " ;
    for(int x : v) cout << x << " " ;

    cout << "\nAfter Reverse : ";
    reverse(v.begin(), v.end());
    for(int x : v) cout << x << " " ;
    cout << endl ;

    // 8. std::rotate: Rotates elements in a range.
    cout << "Before rotating : " ;
    for(int x : v) cout << x << " " ;

    cout << "\nAfter rotating : " ;
    rotate(v.begin(), v.begin()+4, v.end()) ;
    for(int x : v) cout << x << " " ;

    // 9. std::unique: Finds duplicate elements in a sorted Array/Vector. ***imp : vector/array should be sorted
    sort(v.begin(), v.end());
    
    cout << "\nBefore unique : ";
    for (int x : v) cout << x << " ";
    
    auto d = unique(v.begin(), v.end());
    // iterator 'd' will get the index from where first duplicate starts showing in that sorted vector, then we can start erasing those rest duplicates from that 
    v.erase(d, v.end());
    cout << "\nAfter unique : ";
    for (int x : v) cout << x << " ";

    // 10. std::partition: Divides elements in a range/array/vector into two groups based on a predicate.

    cout << "\nBefore partition : ";
    for (int x : v) cout << x << " ";

    cout << "\nAfter Partition : ";
    auto e = partition(v.begin(), v.end(), checkOdd) ;
    for (int x : v) cout << x << " ";
    
}