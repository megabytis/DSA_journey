#include <iostream>
using namespace std;

class abstractionExample {
    private:    
        int num;
        char ch;

    public:
        void setMyValue(int n, char c) {
            num = n;
            ch = c;
        }

        void getMyValue() {
            cout << "Number is : " << num << endl;
            cout << "Character is : " << ch << endl;
        }

};

int main() {
    abstractionExample abs;
    abs.setMyValue(56, 'p');
    abs.getMyValue();
    /*
        but here we can't do like 
        abs.num = 56 ;
        or
        abs.ch = 'k' ;
        cuz they r first of all private , 
        secondly they r written in such way if we'll access only get set methods then they will
        automatically being setted . 

        So, this way 'num' and 'ch' r hidden , k.a. Abstraction in Class .
    */
    return 0;
}