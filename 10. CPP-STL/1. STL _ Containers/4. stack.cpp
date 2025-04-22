#include<iostream>
#include<stack>
using namespace std;

/*
Stack data structure is a LIFO(last in first out ) data structure , i.e. ଯିଏ last ରେ ଆସିଛି ସିଏ first ଯିବ |
e.g. canteen trays :) 
ପ୍ରଥମ ଟ୍ରେ last ରେ ରୁହେ, last ରେ ଯଉ ଟ୍ରେ ଆସେ ପିଲେ ତାକୁ ଆଗ ନିଅନ୍ତି, first ଟ୍ରେ ତା ତଳେ/last ରେ ହିଁ ରହିଯାଏ | 
*/
// Syntax:
// stack<datatype> name;

int main(){

    // Declaring a stack
    stack<int> s;

    // Member functions

    // 1. push() – adds an element to the top of the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // 2. pop() – removes the top element from the stack
    s.pop(); // removes 40

    // 3. top() – returns the top element of the stack
    cout << "Top element: " << s.top() << endl; // prints 30

    /* IMPORTANT ⚠️
    we can't do "stack<int>::iteration it" here , it won't work like in queue also , 
    so we can only iterate by pop() the top then print the top() 🔃 like this ........
    */

    // 4. size() – returns the number of elements in the stack
    cout << "Size of stack: " << s.size() << endl; // prints 3

    // 5. empty() – checks if the stack is empty
    if(s.empty()){
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl; // prints this
    }

    // 6. swap() – swaps the contents of two stacks
    stack<int> s2;
    s2.push(50);
    s2.push(60);
    s2.push(70);

    cout << "Before swap:" << endl;
    cout << "Stack 1 top: " << s.top() << endl;  // prints 30
    cout << "Stack 2 top: " << s2.top() << endl; // prints 70

    s.swap(s2);

    cout << "After swap:" << endl;
    cout << "Stack 1 top: " << s.top() << endl;  // prints 70
    cout << "Stack 2 top: " << s2.top() << endl; // prints 30



    return 0;
}  
