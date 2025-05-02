#include <iostream>
using namespace std;

class WPusers {
    public:
        virtual void chat() = 0;
        virtual void videoCall() = 0;
        virtual void voiceCall() = 0;
};
// Here WPusers is the ABSTRACT class :)

class Student : public WPusers {
    public:
        void chat() {
            cout << "Students are chatting ...." << endl ;
        }

        void videoCall() {
            cout << "Students are in video conference ...." << endl;
        }

        void voiceCall() {
            cout << "Students are talking in voice call ...." << endl;
        }
};

class parentsTeachers : public WPusers {
    public:
        void chat() {
            cout << "Parents and Teachers are chatting ...." << endl ;
        }

        void videoCall() {
            cout << "Parents & Teachers r talking in video conference ...." << endl;
        }

        void voiceCall() {
            cout << "Parents & Teacher are talking in voice call...." << endl ;
        }
};