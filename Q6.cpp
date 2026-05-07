#include <iostream>
using namespace std;
void changeValue(int &x);
int main()
{
    /*
    Q6.Read the theory of references in CPP from your notebook.
    Write program to understand all rules.
    */

    int a = 10;

    int &ref = a;

    cout<<"Value of a = "<<a<<"\n";
    cout<<"Value of ref = "<<ref<<"\n";

    ref = 50;

    cout<<"After changing ref\n";

    cout<<"Value of a = "<<a<<"\n";
    cout<<"Value of ref = "<<ref<<"\n";

    a = 100;


    changeValue(a);

    cout<<"After pass by reference function\n";

    cout<<"Value of a = "<<a<<"\n";

    // int &r;          ERROR : reference must be initialized

    // int &r = 20;     ERROR : cannot bind non-const reference to constant

    const int &r2 = 20;

    cout<<"Constant reference = "<<r2<<"\n";

    return 0;
}
void changeValue(int &x)
{
	cout<<"\n In ref function"<<endl;
    x = x + 10;
}

