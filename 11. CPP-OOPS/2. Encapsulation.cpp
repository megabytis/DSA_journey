#include <iostream>
#include <string>
using namespace std;

class Student {
    // Attributes
    private:
        int Class;
        string gfName;
        float CGPA;
    
    public:
        // constructor
        Student(int Class, string gfName, float CGPA) {
            this->Class = Class ;
            this->gfName = gfName ;
            this->CGPA = CGPA ;
        }

        // public methods to call private Attributes 
        void setCGPA(float cgpa) {
            this->CGPA = cgpa ;
        }

        void getCGPA(){
            cout << this->CGPA << endl;
        }

        string getGfName(){
           return this->gfName; 
        }
        
        void setGfName(string newGfName) {
            this->gfName = newGfName ;
        }

};

int main() {
    Student s1(10,"Smaranika",8.7) ;

    // cout << s1.gfName << endl; 
    /* we can't access a private member/ ptivate attribute, 
    so better will be to create an method in public who will call the 
    private attributes nd we'll call the public Method :), 
    very chaalak bro :)*/

    cout << "Old gf name : " << s1.getGfName() <<endl ;

    s1.setGfName("Kiran");
    cout << "New Gf name : " << s1.getGfName() << endl ;
    s1.setCGPA(8.9);
    s1.getCGPA();
    

    return 0;
}