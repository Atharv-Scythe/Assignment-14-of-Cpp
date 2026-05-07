#include <iostream>
using namespace std;
class Grand
{
public:
    void show()
    {
        cout<<"Grand class function\n";
    }
};

class Parent1 : virtual public Grand
{
};

class Parent2 :  public virtual Grand
{
};

class Child : public Parent1, public Parent2
{
};

int main()
{
    /*
    Q7.WAP for diamond problem in CPP.
    Generate ambiguity error then solve it using virtual classes.
    use child grand and parent as class names
    */

    Child C;

    C.show();

    return 0;
}
