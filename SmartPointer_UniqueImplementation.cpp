#include<iostream>
using namespace std;

template <typename T>
class uniqueptr{
    private:
        T* res;     //same size as pointer. No increase in size.
    public:
        uniqueptr(T* a=nullptr):res(a){
            cout<<"ctor\n";
        }
        uniqueptr(const uniqueptr<T>& ptr) = delete;    //copy constructor
        
        uniqueptr& operator= uniqueptr(const uniqueptr<T>& ptr) = delete; //copy assginment

        uniqueptr(const uniqueptr<T>&& ptr)     //double && --> we will sending the rValue so this is required.
        {
            res=ptr.res;    //transferred the ownership.
            ptr.res=nullptr;
        }

        uniqueptr& operator= uniqueptr(uniqueptr<T>&& ptr){
            if(this!=&ptr)
            {
                if(res){
                    delete res;
                }
                res=ptr.res;
                ptr.res=nullptr;
            }
        }

};



int main()
{
    /*
    unique ptr se hum kya kya operation kr skte hai.
    */
    uniqueptr<int> ptr1(new int(2));
    uniqueptr<int> ptr2(ptr1);   //compilation error. Kyuki unique ptr mai exclusive ownership hoti hai. this operation is not permitted.
    uniqueptr<int> ptr3=ptr1; //compilation error.  (copy constructor)
    uniqueptr<int> ptr4(new int(10));
    ptr4=ptr3;  //compilation error. (copy assignment operator)
    
    uniqueptr<int> ptr3=std::move(ptr1);  //move operator: moving the ownership. ptr1 res will move to ptr3.

    ptr1->func();
    cout<< *ptr1;
    ptr1.get();
    ptr.reset(new int(30));

    //Destructor implementation --> important because we have to clear the resources.

   return 0;
}