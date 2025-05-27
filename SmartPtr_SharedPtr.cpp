/*
Use case: When multiple parts of a program need shared access to the same object.
- Allows multiple pointers to share ownership of an object.
- The object is deleted only when the last shared_ptr goes out of scope.
- Uses Reference Counting to track ownership.
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
};

int main() {
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>();
    shared_ptr<MyClass> ptr2 = ptr1;
    shared_ptr<MyClass> ptr3 = ptr1;
    cout<<"Reference count: " << ptr1.use_count()<<endl;
    return 0;
}