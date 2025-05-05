#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
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

class sortingPatientsWRTbedNum {
    public:
        bool operator()(Hospital a, Hospital b) {
            return a.bed_num > b.bed_num;
        }
};

class sortingPatientsWRTname {
    public:
        bool operator()(Hospital a, Hospital b) {
            return a.patient_name < b.patient_name;
        }
};

int main() {
    /*
        Like we create int type vector i.e. we can push int only into that vector,
        like this i've created Hospital type vector where hospital is a class, 
        so we can push objects fo hospital class only to this vector .
    */
    vector<Hospital> h;

    // ------ 2 ways --------
    // 1st way (manually by creating an OBJECT) :------
    //creating a class
    Hospital p1;
    p1.patient_name = "Veer";
    p1.bed_num = 2;


    // then pushing the obj into the vector
    h.push_back(p1);

    // 2nd way (directly w/o creting OBJECT) :---------
    h.push_back(Hospital("Raghu",4));

    h.push_back(Hospital("Kumar",9));

    h.push_back(Hospital("Radhu",5));

    cout << "Before sorting : \n";
    for(Hospital a : h) cout << a.patient_name << " : " << a.bed_num << endl;


    cout << "After sorting according to bed Number : \n";
    sort(h.begin(), h.end(),sortingPatientsWRTbedNum());
    for(Hospital a : h) cout << a.patient_name << " : " << a.bed_num << endl;


    cout << "After sorting according to name : \n";
    sort(h.begin(),h.end(),sortingPatientsWRTname());
    for(Hospital a : h) cout << a.patient_name << " : " << a.bed_num << endl;

    return 0;
}