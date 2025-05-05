#include <iostream>
#include <string>
using namespace std;

class Hospital {
    public:
        string patient_name;
        int bed_num;
        Hospital(){};

        Hospital(string patient_name, int bed_num) {
            this->patient_name = patient_name;
            this->bed_num = bed_num;
        }

};

// i wanna compare 2 patients on the basis of their bed_num
// So here is the functor 😀
class PatientComparison {
    public:
        PatientComparison(){} ;
        bool operator()(Hospital p1, Hospital p2){
            return p1.bed_num > p2.bed_num;
        }
};


int main() {

    Hospital p1;
    p1.patient_name = "raj Kundra";
    p1.bed_num = 223;

    Hospital p2;
    p2.patient_name = "Nikhil kamath";
    p2.bed_num = 312;

    PatientComparison Pcmp;

    if(Pcmp(p1,p2) == true) {
        cout << "p2 came to hospital first ." << endl ;
    }
    else {
        cout << "p1 came to hospital first ." << endl ;
    }

    return 0;
}