#include <iostream>
using namespace std;

class Grand
{
public:
    Grand()
    {
        cout<<"Grand constructor called\n";
    }

    ~Grand()
    {
        cout<<"Grand destructor called\n";
    }
};

class Parent : public Grand
{
public:
    Parent()
    {
        cout<<"Parent constructor called\n";
    }

    ~Parent()
    {
        cout<<"Parent destructor called\n";
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout<<"Child constructor called\n";
    }

    ~Child()
    {
        cout<<"Child destructor called\n";
    }
};

int main()
{
    /*
    Q8.WAP to understand working of constructors
    and destructors in multilevel inheritance.
    */

    Child C;

    return 0;
}
