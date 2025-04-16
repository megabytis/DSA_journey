/* Traversing a vector */
#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Traversing vector using vector size()
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    return 0;
}