#include <iostream>
using namespace std;

int main() {
    char op;
    int num1, num2;

    cout << "Enter operator (+, -, *, /,q,%): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << (float)num1 / num2;
            break;
        case 'q':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        case '%':
             cout << num1 << " % " << num2 << " = " << num1 % num2;
            break;
        default:
            cout << "Error! Invalid operator.";
    }

    return 0;
}
