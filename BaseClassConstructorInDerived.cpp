
// Base class default constructor will always gets called first as soon as we create derived class obj.

//If we want parameterized constructor to call then we have below implementation. There also base class cons
// will get called first.


#include<iostream>
using namespace std;

class Base
{
    int x;
    public:
        Base(int i)
        {
            x=i;
            cout<<"Base class constructor.";
        }
};
class Derived: public Base{
    int y;
    public:
        Derived(int j): Base(j)
        {
            y=j;
            cout<<"Derived class constructor.";
        }
};

int main()
{
    Derived(10);
    return 0;
}