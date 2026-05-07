#include <iostream>
using namespace std;
class A;
class B
{
public:
    void display(A obj);
};
class A
{
private:
    void secret()
    {
        cout<<"Private member function of class A accessed";
    }

    friend void B::display(A);
};
void B::display(A obj)
{
    obj.secret();
}

int main()
{
    /*
    Q4.WAP to make private member function of one class 
    a friend of another class.
    */

    A a1;
    B b1;

    b1.display(a1);

    return 0;
}
