#include <iostream>
#include <queue>
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

        ~Hospital(){};
};

class customComparator {
    public:
        bool operator()(Hospital a, Hospital b){
            return a.bed_num > b.bed_num;
        }

};

int main() {
    priority_queue<Hospital, vector<Hospital>, customComparator> pq;
    /*
        here while defining priority_queue, i've not defined eitehr greater<int> or less<int> , 
        but passed my own created custome comparator class, which will compare as per my construction 😤
    */


    Hospital h;
    h.patient_name = "Veer";
    h.bed_num = 2;
    pq.push(h);

    pq.push(Hospital("Raghu",4));

    pq.push(Hospital("Kumar",9));

    pq.push(Hospital("Radhu",5));

    cout << pq.top().patient_name << endl;

    return 0;
}