/* FUNCTION OVERLOADING :
here we can write multiple same named functions , but conditions ;
(i) Either change the number of parameters
(ii) Or keep the number of parameters same bu tchnage atleast one's data_type
*/

#include <iostream>
using namespace std;

class addition {
    public:
        int Sum(int a, int b) {
            cout << "Sum of two int : " ;
            return a+b ;
        }

        double Sum(double a, double b) {
            cout << "Sum of two double : ";
            return a+b;
        }

        int Sum(int a, int b, int c) {
            cout << "Sum of three int : ";
            return a+b+c;
        }
};

int main() {

    addition add;
    cout << add.Sum(2,4) << endl;
    cout << add.Sum(3,2,2) << endl;
    cout << add.Sum(3.4,4.9) << endl;
    return 0;
}