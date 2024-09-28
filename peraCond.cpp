#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Parameterized constructor
    Rectangle(int w, int h) : width(w), height(h) {}

    // Function to calculate area
    int area() {
        return width * height;
    }
};

int main() {
    // Create an object using the parameterized constructor
    Rectangle obj(10, 5);
    cout << "Area of rectangle: " << obj.area() << endl;

    return 0;
}
