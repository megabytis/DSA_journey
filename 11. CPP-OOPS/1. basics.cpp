#include <iostream>
#include <string>
using namespace std ;

class student {
    public:
        int id;
        int age;
        string name;
        int nos;
        float *GPA ;

        // BASIC OLD way : Constructor calling
        // student() {
        //     cout << this->name << " constructor called ." << endl ;
        // }

        // Modern new way : Constructor callling like python __init__
        student(int id, int age, string name, int nos, float GPA) {
            // cout << "constructor called ." << endl ;
            this->id = id;
            this->age = age ;
            this->name = name;
            this->nos = nos;
            this->GPA  = &GPA ;
        }


        // COPY CONSTRUCTOR
        student(const student &a) { //this is syntax to make copy constuctor

            cout << "\nCopy constuctor called ." << endl;

            this->id = a.id;
            this->age = a.age;
            this->name = a.name;
            this->nos = a.nos;
            this->GPA = a.GPA;
        }


        // Behaviour / Methods / Functions
        void study() {
            cout << this->name << " is studying & his ID : " << this->id << endl ;
        }
        void bunk() {
            cout << this->name << " is bunking ." << endl;
        }

        // destuctor of student class
        ~student() {
            cout << this-> name << " destructor called ."<< endl ;
            delete GPA ;
        }

};

int main() {

    // OLD way : Defining Objects ----------------
    // student s1 ;
    // s1.name = "miku" ;
    // s1.id = 1 ;
    // s1.bunk();

    // student s2 ;
    // s2.name = "Ritesh";
    // s2.id = 22 ;
    // s2.study();


    // New Modern way : Defining Objects -------------------
    student s1(23,15,"miku",6,8.6);
    student s2(73,16,"karan",4,8.8);

    s1.study();

    // This is how we can copy an object to another new object
    student s3 = s2 ;
    cout << "student s2's name : "<< s2.name << ", student s3's name : " << s3.name << endl ;


    // Dynamic Allocation, or stduent pointer
    student *s4 = new student(222,17,"Balaji",6,8.9);

    cout << s4->age <<endl;
    s4->study();
    delete s4;

    return 0 ;
}
