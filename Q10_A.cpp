#include <iostream>
using namespace std;

class Distance
{
private:
    int km, mtr;

public:
    friend istream& operator>>(istream &in, Distance &d);

    int operator>(Distance d)
    {
        int t1,t2;
        t1=km *1000 + mtr;
        t2=d.km*1000 + d.mtr;
        
        if(t1>t2)
        {
        	return 1;
		}
		else if(t1==t2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
    }
};

istream& operator>>(istream &in, Distance &d)
{
    cout<<"Enter km and mtr: ";
    in>>d.km>>d.mtr;
    return in;
}

int main()
{
    /*
    Q10

    A.
    Complete below program using operator overloading.

    class Distance
    {
        private:
            int km,mtr;
    };
    int main()
    {
        Distance D1,D2;
        cin>>D1>>D2;
        if(D1>D2)
        {
            cout<<"D1 > D2";
        }
        else
        {
            cout<<"D1 < D2";
        }
    };
    */

    Distance D1, D2;

    cin >> D1 >> D2;

    if(D1 > D2)
    {
        cout<<"D1 > D2";
    }
    else
    {
        cout<<"D1 < D2";
    }

    return 0;
}
