/* MAP
- associative container that stores key-value pair .
- allows efficient retrieval and modification of values based on keys .
- Keys are unique within the map .
*/

#include <iostream>
#include <map>
#include <ostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    // Declare a map -> gives everything in sorted manner ,i.e. Numbers, letters, words, everything srted order
    map<int, string> myMap; // -> key_type: int, value_type: string
    // map Complexity : O(log n)

    // Unordered map -> recieve data in unordered way , i.e. Sorting not guaranteed :)
    unordered_map<int, string> myUnorderedMap; // -> key_type: int, value_type: string
    // unOrdered map Complexity : O(1)

    // 1. [] operator
    myMap[1] = "one";   // Insert a key–value pair
    myMap[2] = "two";   // Insert a key–value pair
    myMap[3] = "three"; // Insert a key–value pair
    myMap[9] = "three"; // Insert a key–value pair

    // *** IMPORTANT *** : map doesn't allow duplicate keys 


    // 2. insert() function
    // I. make_pair
    myMap.insert(make_pair(5, "five")); // Insert a key–value pair

    // II. pair<int, string>(key, value)
    myMap.insert(pair<int, string>(6, "six")); // Insert a key–value pair

    // III. initializer list
    myMap.insert({7, "seven"}); // Insert a key–value pair


    // 3. at() function
    myMap.at(1) = "one";   // Insert a key–value pair
    myMap.at(5) = "two";   // Insert a key–value pair
    myMap.at(9) = "three"; // Insert a key–value pair


    // 4. size() function
    cout << "Size of map: " << myMap.size() << endl;


    // 5. empty() function
    if (myMap.empty()) {
        cout << "Map is empty" << endl;
    }
    else {
        cout << "Map is not empty" << endl;
    }
        

    // 6. clear() function
    myMap.clear(); // Clear the map
    cout << "Size of map after clear: " << myMap.size() << endl;

    // Re-inserting elements for demonstration
    myMap[1] = "oneeee";
    myMap[2] = "twooo";
    myMap[3] = "threeeee";
    myMap[4] = "fourrrr";
    myMap[5] = "fiveeee";

    

    // 7. Iterate 
    // cout << "Map elements : " << endl;
    // map<int, string>::iterator it = myMap.begin() ;
    // while (it != myMap.end()) {
    //     cout << *it<< endl ;
    //     it++ ;
    // } // it Won't work

    // ଯେହେତୁ ସବୁ Index ରେ ଗୋଟିଏ element ନଥାଇ କି pair ଆକାରରେ ଅଛି , so printing only *it i.e. one value won't work , so we have to ceate a pair to print both key:values of each index . 
    // so , iterating through the map(begin(), end())
    cout << "Map elements using pair< >: " << endl;
    map<int, string>::iterator it = myMap.begin() ;
    while (it != myMap.end()) {
        pair<int, string> m = *it ;
        cout << m.first << " : " << m.second << endl ;
        it++ ;
    }
    // -------------- OR ---------------
    cout << "Map elements using ->: " << endl;
    for (auto it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    } 



    // 8. erase() function
    myMap.erase(1); // Erase the key 1
    cout << "Map elements after erase: " << endl;
    for (auto it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }



    // 9. find() function  *** MOST IMPORTANT ***
    /*
    Here it means myMap ରେ ସେ each index ରେ ହାତ ମାରିଲା / key କୁ find କରିଚାଲିଲା, ଯଦି end କୁ କେବେ ନଆସିଲା, ତାମାନେ ତାକୁ ଅଧା ବାଟରେ key ମିଳିଗଲା abvoiusly ,nd return 'key found' 
    */
    if(myMap.find(44) != myMap.end()) {
        cout << "Yup key 4 found" << endl ;
    }
    else {
        cout << "Nope key 4 doesn't found " << endl ;
    }



    // 10. count() function : ଇଏ ଖୋଜିବ, given key ଟା present ଅଛି ନ ନାହିଁ myMap ଭିତରେ, if yes, it will return 1, otherwise it will return 0
    cout << "Count of key 1: " << myMap.count(1) << endl;
    cout << "Count of key 2: " << myMap.count(2) << endl;

    return 0;
}
