
// Virtual method - used to implement run time polymorphism.

#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout<<" Print Base class"<<endl;
        }
        void show()
        {
            cout<<" show base class"<<endl;
        }
};

class derived: public Base
{
    public:
        void print()
        {
            cout<<" Print Derived class."<<endl;
        }
        void show()
        {
            cout<<" show derived class."<<endl;
        }
};

int main()
{
    Base *bptr;         // virtual function are called acc to the type of object pointer or referred, 
    derived d;          // not acc to the type of pointer or reference.
    bptr=&d;    // --> ye statement, pointer is pointing to derived class obj. 
    bptr->print();  // -> print will call, acc to type of object pointer. (so child class print() gets invoked)
    bptr->show();   // -> show will get call acc to type of pointer. (so base class show will be invoked.)
    return 0;
}

// bptr=&d; 