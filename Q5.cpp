#include <iostream>
using namespace std;

class Number
{
    int x, y;

public:
    Number(int a, int b) : x(a), y(b)
    {
        cout<<"Class Number constructor called\n";
    }

    void show()
    {
        cout<<"x = "<<x<<" y = "<<y<<"\n";
    }
};

int main()
{
    /*
    Q5.WAP to check working of initialization list.
    Perform experiments. use two classes and 2 datamembers each
    */

    Number obj1(10,20);
	
    obj1.show();

    return 0;
}
