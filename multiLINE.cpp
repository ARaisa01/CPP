#include <iostream>
using namespace std;

// Base class
class CSE {
public:
    CSE() {
        cout << "I am from CSE class" << endl;
    }
};

class EEE {
public:
    EEE() {
        cout << "I am from EEE class" << endl;
    }
};

// Derived class
class Student : public CSE, public EEE {
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
