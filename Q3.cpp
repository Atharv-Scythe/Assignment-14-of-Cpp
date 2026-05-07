#include <iostream>
using namespace std;

class Abstract
{
protected:
    int x;

public:
    Abstract()
    {
        x = 10;
        cout << "Abstract class constructor called" << endl;
    }

    virtual void show() = 0;

    void normalFunction()
    {
        cout << "Normal member function in abstract class" << endl;
    }

    virtual ~Abstract()
    {
        cout << "Abstract class destructor called" << endl;
    }
};

class Demo : public Abstract
{
public:
    Demo()
    {
        cout << "Demo class constructor called" << endl;
    }

    void show()
    {
        cout << "Pure virtual function defined in child class" << endl;
        cout << "Value of x = " << x << endl;
    }

    ~Demo()
    {
        cout << "Demo class destructor called" << endl;
    }
};
int main()
{
    /*
    Q3.WAP to understand working of abstract classes.Perform experiments.
    Test all the rules we have seen during lecture.

    -Try to assign some other value to pure virtual function.
    -use normal member functions,constructors,destructors and data members in abstract classes.
    -check if pure virtual functions can be made private or not.
    */

    // Abstract A;   // ERROR : object of abstract class cannot be created

    Demo D;

    D.normalFunction();

    D.show();

    Abstract *ptr;

    ptr = &D;

    ptr->show();

    return 0;
}
