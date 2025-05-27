#include<iostream>
#include<new>
using namespace std;
class Base{
public:
    Base()
    {
        cout<<"Base constructor\n";
    }
    virtual ~Base()     //Run-time polymorphism mai base destructor virtual hona chaiye. (remove virtual and see behaviour.)
    {
        cout<<"Base Destructor\n";
    }
};
class Derived: public Base{
public:
    Derived()
    {
        cout<<"Derived constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived Destructor\n";
    }
};
int main()
{
    Base *b= new Derived();   //when destructing an object via a pointer or a reference to a base class, the 
                              //base class destructor must be virtual.
    delete b;
    /*
    Compiler will not make destructor virtual.
    
    Virtual constructor: compiler makes the vptr (point to the vTable) in the constructor. In constructor,
    If virtual pointer is going to point that means you can not make the constructor as virtual. (qki constructor hi 
    vptr banega to jub tak object hi nhi hoga toh, vptr are not yet pointing to any vtable so it doesn't make any sense.)
    */
}