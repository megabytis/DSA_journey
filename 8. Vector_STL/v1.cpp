/* Multiple ways of Innitializing a vector */

//#include <bits/stdc++.h>  :- this will include all header files :)
#include<iostream>
#include<vector>
using namespace std;

void vectorPrint(vector<int> v) 
{ 
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() 
{

    // way-1 : Creating an empty vector - This is DEFAULT method
    vector<int> v1;

    // way-2 : Creating a vector of 5 elements from
    // initializer list
    vector<int> v2 = {1, 4, 2, 3, 5};

    // way-2 : Creating a vector of 5 elements
    vector<int> v3{11, 22, 33, 44, 55};

    // way-3 : Creating a vector of 5 elements with a default value
    vector<int> v4(5, 9);



    vectorPrint(v1);
    vectorPrint(v2);
    vectorPrint(v3);
    vectorPrint(v4);

    return 0;
}