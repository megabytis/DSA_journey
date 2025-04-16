/* Methods of deleting & erasing elements from an Vector */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Deleting only the last element 'z'
    v.pop_back();

    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
  
    // Deleting element 'f'
    v.erase(find(v.begin(), v.end(), 'f'));

    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // To erase entire Vector
    cout << "After clearing entire vector & pushing a new element" << endl ; 
    v.clear();
    v.push_back('M') ;
    
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    return 0;
}
