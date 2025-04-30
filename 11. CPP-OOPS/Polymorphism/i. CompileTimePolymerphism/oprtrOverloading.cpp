/*
    VERY VERY VERY IMPORTANT !!!
*/

#include <iostream>
using namespace std;

class Complex {
    public:
        int real, img;

        Complex(){
            real = img = -1 ;
        }

        Complex(int r, int i) : real(r), img(i){} ;

        void print() {
            cout << this->real << " + " << this->img << "x"<< endl;
        }

        /*  *** IMPORTANT ***
            Two ways to write these operator stuffs ;
                (i) as MEMBER FUNCTION 
                    - defined inside class
                    - only 1 arguement used
                    - 'this' operator used

                (ii) as NON-MEMBER FUNCTION
                    - defined outside the class
                    - two arguments used
        */
        // Member function for Substraction
        Complex operator- (const Complex &B) { // here Complex operator- means we want to return an Complex value/answer 
            Complex temp; // A new final complex Answer is gonna stored here 
            temp.real = this->real - B.real;
            temp.img = this->img - B.img;
            // as we have taken B in param , so here 'this' refers to abviously 'A' :)

            return temp ; // The final full complex answer will be returned to that object where the specific operator was being used . (e.g. to C ) 
        }
        /*-----------------OR-------------------------*/

        // MEMBER FUNCTION for Multiplication 
        // directly written return no xtra object like temp
        // Complex operator* (const Complex &B) {
        //     return Complex(this->real * B.real, this->img * B.img);
        // }

        bool operator== (const Complex &B) {
            return (this->real == B.real) && (this->img == B.img) ;
        }

};

/*
NON-MEMBER FUNCTION for Multiplication 
i.e. outside the class 
*/ 
Complex operator* (Complex &A, Complex &B) {
    return Complex(A.real * B.real, A.img * B.img);
}


int main() {

    Complex A(2,5);
    A.print();

    Complex B(4,8);
    B.print();

    Complex aa(3,2);
    aa.print();

    Complex D;
    D = A * B ;
    D.print();

    Complex C;
    C = A - B - aa ;
    C.print();

    /*
        Here Complex A, Complex B , where Complex is the class, but it's data-type man :),
        it means an complex number will gonna stored in A, B, C
    */ 
    /*
        Doesn't matter how much r there liek x = a-s-f-s-g :), still we'll write the operator+ / operator- / operator* etc... like the same above as member/non-member function i.e. 1 nd 2 params accordingly :)
        but inside it will calculate like (((a-s)-f)-s)-g like this manner .

    */

    bool E = A == aa ;
    cout << E << endl;

    return  0;
}

/*
Below are the operators which can be overloaded in C++:

1. Arithmetic Operators:
   +, -, *, /, %

2. Relational Operators:
   ==, !=, <, >, <=, >=

3. Logical Operators:
   &&, ||, !

4. Assignment Operators:
   =, +=, -=, *=, /=, %=
   &=, |=, ^=, <<=, >>=

5. Increment/Decrement Operators:
   ++, --

6. Subscript Operator:
   []

7. Function Call Operator:
   ()

8. Member Access Operators:
   ->, ->*

9. Memory Allocation/Deallocation:
   new, new[], delete, delete[]

10. Bitwise Operators:
    &, |, ^, ~, <<, >>

11. Other Operators:
    , (comma), .* (pointer-to-member)
*/