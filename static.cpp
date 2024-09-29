#include <iostream>
using namespace std;

class p {
    private:
        int a=10;
        string s = "Prime";
        static float num;
    public:
        void func(){

        num=100;}

  void display() {
    cout <<a<<"  "<<s<<"  "<<num++<< endl;
}

};

float p::num;

int main() {
    p obj1, obj2, obj3;

    obj1.func();
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
