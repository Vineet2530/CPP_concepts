/*
Use case: When an object should not own the memory but needs access to it.
- Works with std::shared_ptr but does NOT increase the reference count.
- Used to prevent circular references (memory leaks in shared ownership).
- Can be converted to std::shared_ptr using .lock().
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
    shared_ptr<MyClass> sharedPtr = make_shared<MyClass>();
    weak_ptr<MyClass> weakPtr = sharedPtr;
    cout<<"Reference count: " << sharedPtr.use_count()<<endl;
    
    // Convert weak_ptr to shared_ptr if valid
    if(auto ptr = weakPtr.lock())
        cout<<"Weak ptr is still valid."<<endl;
    else
        cout<<"object has been deleted"<<endl;
    return 0;
}