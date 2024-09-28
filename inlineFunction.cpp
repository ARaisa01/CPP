#include <iostream>

using namespace std;

// Inline function
inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "Sum: " << add(40, 50) << endl;

    return 0;
}
