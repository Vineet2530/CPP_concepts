/*
Smart pointers in C++ manage memory automatically and help prevent memory leaks by deallocating memory when no longer needed. 
They are part of the <memory> library.

Unique_PTR:
    - Ensures single ownership: Only one pointer can own the object at a time.
    - Automatically deletes the object when it goes out of scope.
    - Cannot be copied but can be moved using std::move().
*/

#include <iostream>
#include <memory>

using namespace std;

class MyClass{
    public:
    MyClass()
    {
        cout<<"Constructor called."<<endl;
    }
    ~MyClass()
    {
        cout<<"Destructor called"<<endl;
    }
    void show()
    {
        cout<<"Hello from MyClass"<<endl;
    }
};

int main() {
    unique_ptr<MyClass> ptr1 = make_unique<MyClass>();
    ptr1->show();
    unique_ptr<MyClass> ptr2 = move(ptr1);
    if(!ptr1)
    {
        cout<<"ptr1 is null"<<endl;
    }
    ptr2->show();
    return 0;
}