#include "whatsApp.cpp"
using namespace std;

void usersUsingWP(WPusers &users) {
    users.videoCall();
    users.voiceCall();
    users.chat();
    users.voiceCall();
    users.chat();
    users.videoCall();
}

int main() {

    // WPusers *user ;
    // usersUsingWP(*user);
    /*
        This won'ty work, cuz WPusers is an 'ABSTRACT' class,
        we can't instantiate abstract calss .
        in whatsApp.cpp , WPusers class is the REAL ABSTRACT CLASS .
    */


    WPusers *s1 = new Student() ;

    usersUsingWP(*s1);
    
    WPusers *pt1 = new parentsTeachers();

    usersUsingWP(*pt1);


    return 0;
}