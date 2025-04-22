#include <iostream>
#include <queue>
using namespace std;

// Queue is a FIFO(first in first out ) data structure , i.e. line ର ଆଗରେ ଯିଏ ଥିବ ସିଏ ଆଗ ସିଏ ଆଗ ବାହାରିବ, ଆଉ  ନୁଆଁ ଲୋକ line ରେ ପଛଆଡ଼ୁ ପସିବେ 

// Syntax:
// queue<type> name;

int main() {
    // declare a queue of integers
    queue<int> q;

    // Member functions of queue
    // 1. push() – adds an element to the back of the queue
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
    q.push(50); // 10 20 30 40 50
    q.push(60); // 10 20 30 40 50 60
    q.push(70); // 10 20 30 40 50 60 70

    // 2. pop() – removes the front element of the queue
    q.pop(); // removes 10 --> 20 30 40 50 60 70
    q.pop(); // removes 20 --> 30 40 50 60 70

    // 3. front() – returns the front element of the queue
    cout << "Front element: " << q.front() << endl; // 30

    /* IMPORTANT ⚠️
    we can't do "stack<int>::iteration it" here , it won't work , 
    so we can only iterate by pop() the front then print the front() 🔃 like this ........
    */

    // 4. back() – returns the back element of the queue
    cout << "Back element: " << q.back() << endl; // 70

    // 5. size() – returns the number of elements in the queue
    cout << "Size of queue: " << q.size() << endl; // 5

    // 6. empty() – returns true if the queue is empty, false otherwise
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // No

    // 7. clear() – not available in queue
    // q.clear();

    // 8. swap() – swaps the contents of two queues
    queue<int> q2;
    q2.push(100);
    q2.push(200);
    q2.push(300);

    cout << "\n Queue 1: ";
    // Traversing the queue
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "Queue 2: ";
    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;

    // Refill q and q2 for swap example
    q.push(10);
    q.push(20);
    q2.push(100);
    q2.push(200);

    q.swap(q2); // swap contents of q and q2
    cout << "\nAfter swapping:" << endl;

    cout << "Queue 1: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "Queue 2: ";
    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;

    return 0;
}
