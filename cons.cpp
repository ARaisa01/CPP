#include <iostream>

using namespace std;

class Example {
    int value;

public:
    // Parameterized constructor
    Example(int v) : value(v) {}

    // Copy constructor
    Example(const Example &e) {
        value = e.value;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display the value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj1(10); // Create an object using the parameterized constructor
    obj1.display();

    Example obj2 = obj1; // Create another object using the copy constructor
    obj2.display();

    return 0;
}
