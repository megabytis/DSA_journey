#include <iostream>
using namespace std;

class multiplication {
    public:
        int num1, num2;

        int operator()(int n1, int n2) {
            return n1 * n2;
        }
        /*
            Here 'operator()' is a special member function,
            that allows an object to be called like a function . 
            -> so, କହିବାକୁ ଗଲେ operator()(), ଏଇ class କୁ ଗୋଟେ FUNCTION CLASS ବନେଇଦେଲା | we can directly pass argument by object(--args--), no need to call function() .
        */
};

int main() {

    multiplication mul;
    cout << mul(2,4) << endl;
    /*
        here 'mul' is an object, so traditionally to call an class's function 
        through an object it shoudl be like 
        <obj_name>.<function_name>(--arguments--)
        but here i directly passed args in obj....
        so here ;
        mul(2,4) means :- mul.operator()(2,4) 😆
    */

    return 0;
}




