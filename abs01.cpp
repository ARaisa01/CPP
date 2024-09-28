#include<iostream>
using namespace std;

class Abs
{

private:
    int a,b;

public:
    void set(int x,int y)
    {
        a = x;
        b = y;

    }
    void display()
    {
        cout<< a+b<<endl;

    }

};
int main ()
{
    Abs o1;
    o1.set(10, 20);
    o1.display();

}
