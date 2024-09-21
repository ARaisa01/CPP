#include <iostream>
using namespace std;

//Make CSE the base class.
//Derive EEE from CSE.
//Derive Student from EEE
class CSE {
public:
    CSE() {
        cout << "I am from CSE class" << endl;
    }
};

// Derived class
class EEE : public CSE {
public:
    EEE() {
        cout << "I am from EEE class" << endl;
    }
};

// Further derived class
class Student : public EEE {
public:
    void display() {
        cout << "STUDENT CLASS" << endl;
    }
};

int main() {
    Student ob;
    ob.display();
    return 0;
}
