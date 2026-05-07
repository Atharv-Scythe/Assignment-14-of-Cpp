#include <iostream>
using namespace std;
class Poly
{
public:
    void add(int a, int b)
    {
        cout << "Addition of integers = " << a + b <<'\n';
    }

    void add(float a, float b)
    {
        cout << "Addition of float values = " << a + b << '\n';
    }

    void add(int a, int b, int c)
    {
        cout << "Addition of three integers = " << a + b + c << '\n';
    }
};
int main()
{
    /*
    Q1. WAP to check compiletime polymorphism.
    Use runtime objects.
    */

    Poly obj;

    obj.add(10, 20);
    obj.add(2.5f , 3.5f);
    obj.add(1, 2, 3);

    return 0;
}
