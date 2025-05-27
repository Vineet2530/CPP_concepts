/*
Problem with multiple inheritance.
    A
   / \
  B   C
   \ /
    D
 
 Solution: virtual inheritance
*/
#include<iostream>
using namespace std;

class A
{
  public:
    void show()
    {
        cout<<"This is A show."<<endl;
    }
};
class B: virtual  public A
{
   public:
};
class C: virtual public A
{
    public:
};
class D: public B, public C
{
  public:
};

int main()
{
    D obj;      //compiler confuse ho jayega kaha se show call karna, ambiguity hai code mai.
                // Solution: Virtual inheritance, to make sure only one instance of show gets created.
                // Both class A & B will share that instance.
    obj.show();
    return 0;

}