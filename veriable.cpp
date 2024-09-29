
#include<iostream>
using namespace std;

class Variable
{
public:
    static int id; // Static Variable
    string name = "ABCD"; // Instance Variable
    void display()
    {
        string mobile = "234567"; // Local Variable
        cout << mobile << endl;
    }
};
int Variable::id = 1234; // Defining Static variable

int main()
{
    Variable obj;
    cout << obj.name << endl; // Accessing Instance variable
    cout << obj.id << endl; // Accessing Static variable
    obj.display();

    return 0;
}

