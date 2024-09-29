#include<iostream>
using namespace std;

class Employee {
    private:
        int id;
        string name;
        float salary;
    public:
        Employee(int id, string name, float salary) {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }
        void display() {
            cout << "ID=" << id << " Name=" << name << " Salary=" << salary << endl;
        }
};

int main() {
    Employee e1(101, "Yusha", 890000);
    Employee e2(102, "Manaf", 59000);
    e1.display();
    e2.display();
}
