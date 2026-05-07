#include <iostream>
using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout<<"Parent1 constructor called\n";
    }

    ~Parent1()
    {
        cout<<"Parent1 destructor called\n";
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout<<"Parent2 constructor called\n";
    }

    ~Parent2()
    {
        cout<<"Parent2 destructor called\n";
    }
};

class Child : public Parent1, public Parent2
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
class Child2 : public Parent2, public Parent1
{
	public:
		Child2()
		{
			cout<<"Child2 constructor called\n";
		}
		
		~Child2()
		{
			cout<<"Child2 Destructor called\n";
		}
};
int main()
{
    /*
    Q9.WAP to understand working of constructors
    and destructors in multiple inheritance.
    */
	cout<<"\n In main The Child2 obj is being written \n";
	Child2 obj;
    {
    	cout<<"\n Child obj is being written \n";
    	Child var;
	}

    return 0;
}
