#include <iostream>
using namespace std;

// Base class hierearchial
class Student {
public:
    Student() {
        cout << "I am a Student" << endl;
    }
};

// sub class
class person : public Student {
public:
    person() {
        cout << "I am from person class" << endl;
    }
};

// sub class
class EEEStudent : public Student {
public:
    EEEStudent() {
        cout << "I am from EEE class" << endl;
    }
};

int main() {
   person o;
   EEEStudent o2;

    return 0;
}
