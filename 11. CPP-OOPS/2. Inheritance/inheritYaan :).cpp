/* BASIC SYNTAX TO INHERIT :---

class parent_class {
   public :
        int x;
        float y;
}

class derived_class : public parent_class {
    public :
        int z;

        derived_class(int x_, float y_, int z_) {
            this -> x = x_ ;
            this -> y = y_ ;
            this -> z = z_ ;
         }
}

*/


#include <iostream>
#include <string>
using namespace std;

class Vehicle { // Parent class

    protected:
        string name; 
        // can be accessed in current class & derived class but not in main()

    private:
        string model;
        // can be accessed in current class , not in derived class or main()

    public:
        int numOfTyre;
        // can be accessed everywhere 

        Vehicle(string _name_, string _model_, int _numOfTyre_) { /* Constructor of vehicle class */
            cout << "Vehicle constructor called...." << endl;
            this->name = _name_;
            this->model = _model_;
            this->numOfTyre = _numOfTyre_;
        }
    
            
        void startEngine(){
            cout << "Engine started of " << this->name  << endl;
        }

        void stopEngine(){
            cout << "Engine stopped of " << this->name << endl;
        }

        void getModelName() {
            cout << this-> model << endl ;
        }

        ~Vehicle(){
            cout << "Vehicle's destructor called...." << endl;
        }
};

class Truck : public Vehicle { // Child/ Derived class
    public:
        int numOfDoors;
        string transmissionType;

        Truck(int _numOfDoors_, string _transmissionType_, string _name_, string _model_, int _numOfTyre_) : Vehicle(_name_,_model_,_numOfTyre_) {
            cout << "Now i'm inside Truck class's constructor..." << endl ;
            this->numOfDoors = _numOfDoors_;
            this->transmissionType = _transmissionType_;
        }

        void startAC() {
            cout << "Air conditioner started of " << this->name << " " << endl;
        }

        ~Truck() {
            cout << "Now i'm inside Truck class's desstructor..." << endl ;
        }
};

class Bike : public Vehicle { // Child/ Derived class
    public:
        string handleStyle;
        string enginePower;

        Bike(string _name_, string _model_, int _numOfTyre_, string _handleStyle_, string _enginePower_) : Vehicle(_name_,_model_,_numOfTyre_) {
            cout << "Bike's constuctor caled..." << endl;

            this->handleStyle = _handleStyle_;
            this->enginePower = _enginePower_;
        }

        void turnHandle() {
            cout << this-> name << "'s " << this->handleStyle << " styled handle turned." << endl;
        }

        ~Bike() {
            cout << "Bike's destuctor caled..." << endl;
        }
};

int main(){

    Vehicle v1("TATA", "T1V79W", 12);
    v1.startEngine();
    v1.getModelName();
    v1.stopEngine();

    Truck t1(5,"logistics", "Volvo","v943t", 20);
    t1.startEngine() ;
    t1.getModelName();
    t1.startAC();
    t1.stopEngine();

    Bike b1("Apache","ap1t34",2,"U", "334cc");
    b1.startEngine();
    b1.getModelName();
    b1.turnHandle();
    b1.stopEngine();

    return 0;
}
