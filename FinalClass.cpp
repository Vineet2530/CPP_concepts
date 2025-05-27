
// Final: 2 use cases
//      1. we can declare a method that cannot be overridden
//      2. we can define a class that cannot be derived.
            // If a class is marked as final then it becomes non-inheritable & 
            // it cannot be used as base class



#include<iostream>
using namespace std;

class Base //final
{
    public:
    void show()
    {
        cout<<"I am base."<<endl;
    }
};

class Derived: public Base{         // We cannot inherit base class since its final
    public:
        void show()
        {
            cout<<"I am derived."<<endl;
        }
};
int main()
{
    Derived d;
    d.show();
    return 0;
}