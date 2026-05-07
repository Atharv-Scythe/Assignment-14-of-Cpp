#include <iostream>
using namespace std;
class Grand
{
public:
    virtual void show()
    {
        cout << "Grand class function" << endl;
    }
};
class Parent : public Grand
{
public:
    
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class function" << endl;
    }
};
int main()
{
    /*
    Q2. AWP to check working of runtime polymorphism.Perform experiments.
    -Try Runtime Polymorphism for Grand->Parent->Child sequence.
    -Create pointer and try to store address of object of every class in that pointer.
    Check compiler results.
    -Read notebook.
    */

    Grand g;
    Parent p;
    Child c;

    Grand *ptr;

    ptr = &g;
    ptr->show();

    ptr = &p;
    ptr->show();

    ptr = &c;
    ptr->show();

    return 0;
}
