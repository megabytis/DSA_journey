#include <iostream>
using namespace std;

class shape {
    public:

        // consructor
        shape(){};

        // Virtual function - enables runtime polymorphism
        // This means derived classes can override it with their own implementation
        virtual void draw() {
            cout << "Drawing normally ...." << endl;
        }
        /* 
        Why virtual? 
        - 'virtual' tells the compiler: "Hey, this function might be redefined in child classes also, 
        go nd re-verify that which class's object have called the function lol :)"
        - Without it, the compiler would always call shape's draw() (early binding)
        - With it, the correct draw() is chosen at runtime (late binding)
        */
        
        // destructor
        virtual ~shape() {};
};

class circle : public shape { 
    /*
    Inheritance is crucial here because:
    1. It establishes an "is-a" relationship (a circle IS A shape)
    2. Allows circle to override shape's draw() function
    3. Enables treating circle objects as shape objects (polymorphism)
    */
    public:
        void draw() final {
            cout << "Drawing a Circle ...." << endl ;
        }
        /*
        This overrides shape::draw() because:
        1. The function has same name and signature
        2. The base class function is virtual
        3. This is runtime polymorphism in action!
        */
};

class triangle : public shape {
    public:
        void draw() {
            cout << "Drawing a Triangle...." << endl;
        }
        /* 
        Same overriding principle applies here
        Each derived class provides its own specific implementation
        */
};

void drawingStuffs(shape *d) {
    d->draw(); 
    /*
    Magic of polymorphism happens here:
    1. The pointer 'd' is of type shape*, so it should call draw() of shape class's only ,
    2. But but but .. it can point to any derived class object (circle, triangle), due to the +nce of 'virtulal' keyword in shape/parent class draw() func,
    it means during that shape's draw() calling it will again re-verify actually which class's obj was calling me :) .
    3. Then at runtime, the correct draw() is called based on actual object .
    4. This is called "dynamic dispatch"
    */
}

int main() {
    shape sobj;
    circle cobj;

    // this will require 'virtual' keyword
    drawingStuffs(&cobj); 
    /*
    What happens:
    1. We pass address of circle object to function expecting shape pointer
    2. Compiler allows this because circle inherits from shape (upcasting)
    3. At runtime, circle's draw() is called because:
       - draw() is virtual in base class
       - Actual object type is circle
    */


    // this won't require 'virtual' keyword
    triangle *tobj = new triangle();
    tobj->draw();
    // drawingStuffs(&tobj);
    //Same process, but calls triangle's draw()


    // UPCASTING : 
    shape *abc = new circle();
    abc->draw();
    /*
        here we created obj using parent class but 
        inserting circle class's material in it :) LoL .

        --> this UPCASTING will be used 99% of the time in future .not downcasting :)
    */


    // DOWNCASTING :
    // this is Unsafe (may crash if types mismatch)
    // this is not gonna be used in future 
    shape *xyz = new shape();
    triangle *mno = dynamic_cast<triangle*>(xyz);  
    if (mno) {  
        mno->draw();   
    } else {  
        cout << "Not a triangle!" << endl;  
    }

    return 0;
}

/*
Key Takeaways:
1. Virtual functions enable runtime polymorphism
2. Inheritance allows function overriding
3. Base class pointers can call derived class methods
4. The correct function version is determined at runtime
5. This is fundamental for flexible, extensible code
*/