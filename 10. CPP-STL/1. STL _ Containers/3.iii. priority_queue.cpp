/*
- Adapter class that provides a priority queue (heap)
- Elements are stored in a way that allows the retrieval of the highest-priority efficiency .
*/

#include <functional>
#include<iostream>
#include<queue>
#include <vector>
using namespace std;

int main(){
    // default MAX HEAP (gives maximum element/value = which is highest priority)
    priority_queue<int> pq;
    priority_queue<int, vector<int>, less<int>> pqq ;
    // Both r same, both will create MAX HEAP :)
    /*
        here ;
        in priority_queue<int, vector<int>, less<int>>
        in parameters ;
        int -> means we r gonna store integers
        vector<int> -> means underlining container we r using is Vector container
        less<int>  -> an 'compairator', which will give maximum value .
    */

    // MIN HEAP (gives minimum element/value = which is highest priority)
    priority_queue<int, vector<int>, greater<int>> pq1 ;

    // 1. push()
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(30);

    pq1.push(10);
    pq1.push(20);
    pq1.push(5);

    // 2. pop() -> removes the highest priority element
    pq.pop(); // removes 30 (max)

    // 3. top() -> gives highest priority element
    cout << "Top element of pq : " << pq.top() << endl;
    cout << "Top element of pq1 : " << pq1.top() << endl;

    // 4. size()
    cout << "Size of priority queue: " << pq.size() << endl;

    // 5. empty()
    if(pq.empty())
        cout << "Priority queue is empty" << endl;
    else
        cout << "Priority queue is not empty" << endl;

    // 6. swap()
    priority_queue<int> pq2;
    pq2.push(100);
    pq2.push(200);
    pq2.push(50); 

    cout << "Before swap:\n";
    cout << "pq: " << pq.top() << endl;
    cout << "pq2: " << pq2.top() << endl;

    pq.swap(pq2);

    cout << "After swap:\n";
    cout << "pq: " << pq.top() << endl;
    cout << "pq2: " << pq2.top() << endl;

    return 0;
}
