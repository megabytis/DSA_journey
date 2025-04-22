/* SET
- sorted collection of unique elements
- elements are stored in sorted order, and duplicates are automaically removes .
- Provides efficient insertion, deletion, and search operations .
*/

#include <iostream>
#include <set>
#include <unordered_set> // For unordered_set
using namespace std;

int main() {
    // Create a set of integers
    set<int> mySet;
    /*
    --> By default, set is ordered
    --> complexity : O(log n)
    */
    

    // Unordered set
    unordered_set<int> myUnorderedSet;
    /*
    --> unordered_set is not ordered
    --> complexity : O(1)
    */


    // Member functions

    // 1. Insert elements
    mySet.insert(10);
    mySet.insert(30);
    mySet.insert(20);
    mySet.insert(40);
    mySet.insert(50);

    mySet.insert(10); // Duplicate element, will not be added
    mySet.insert(20); // Duplicate element, will not be added


    // 2. Iterate through the set (begin() and end())
    cout << "Elements in the set: ";
    set<int>::iterator itt = mySet.begin() ;
    while (itt != mySet.end()) {
        cout << *itt << " " ;
        itt++ ;
    }
    cout << endl;

    // -------------- OR ------------------------

    cout << "Elements in the set: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;



    // 2. Size of the set
    cout << "Size of the set: " << mySet.size() << endl;


    // 3. Check if the set is empty
    if (mySet.empty()) {
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }


    // 6. Clear the set
    mySet.clear();
    cout << "Set after clearing: ";
    for(auto it = mySet.begin(); it != mySet.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    // 5. Erase an element
    mySet.erase(30);
    cout << "Set after erasing 30: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


    mySet.insert(10);
    mySet.insert(30);
    mySet.insert(20);
    mySet.insert(40);
    mySet.insert(50);

    // 4. Find an element  *** MOST IMPORTANT ***
    int elementToFind = 20;
    auto it = mySet.find(elementToFind);
    if (it != mySet.end()) { // ଏଇ line ର ଅର୍ଥ ହେଉଛି କି iterator ଯାହା ଭିତରେ elementToFind = 20 ଅଛି , ସେ ଯଦି mySet.edn() ପର୍ଯ୍ୟନ୍ତ ନ ପହଂଚି ପାରେ,  that means Element found in set :)
        cout << "Element " << elementToFind << " found in the set." << endl;
    } else {
        cout << "Element " << elementToFind << " not found in the set." << endl;
    }
    /*
    Here it means mySet ରେ ସେ each index ରେ ହାତ ମାରିଲା / elementToFind କୁ find କରିଚାଲିଲା, ଯଦି end କୁ କେବେ ନଆସିଲା, ତାମାନେ ତାକୁ ଅଧା ବାଟରେ findingelement ମିଳିଗଲା abvoiusly ,nd return 'found in the set' 
    */


    // 8. count() : ଇଏ ଖୋଜିବ, given key ଟା present ଅଛି ନ ନାହିଁ myMap ଭିତରେ, if yes, it will return 1, otherwise it will return 0
    int count = mySet.count(20);
    if (count > 0) {
        cout << "Element 20 exists in the set." << endl;
    } else {
        cout << "Element 20 does not exist in the set." << endl;
    }

    return 0;
}
