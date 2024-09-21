#include <iostream>

using namespace std;

// Base class
class CSE {
public:
    string name="AR";
    int id=1862;
    void print()
    {
        cout<<"I am from CSE class" <<endl;
    }

};

// Derived class
class Student : public CSE {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student ob;
    ob.display();
    ob.print();
    return 0;
}
