#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // If year is divisible by 4 AND not divisible by 100 OR divisible by 400, it is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) 
    {
        cout << year << " is a leap year.";
    } 
    else 
    {
        cout << year << " is not a leap year.";
    }

    return 0;
}
