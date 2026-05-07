#include <iostream>
using namespace std;
class Number
{
    int x;

public:
    Number()
    {
        x = 0;
    }

    Number(int a)
    {
        x = a;
    }

    Number operator++()
    {
        ++x;
        return *this;
    }

    Number operator++(int)
    {
        Number temp = *this;
        x++;
        return temp;
    }

    void show()
    {
        cout<<"x = "<<x<<"\n";
    }
};

int main()
{
    /*
    Q10 B.
    WAP to overload preincrement and postincrement operators.
    */

    Number N1(10), N2;

    N2 = ++N1;

    cout<<"After preincrement\n";

    N1.show();
    N2.show();

    N2 = N1++;

    cout<<"After postincrement\n";

    N1.show();
    N2.show();

    return 0;
}
