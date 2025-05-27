

#include <iostream>
using namespace std;
 
class Test 
{
  public:
    int x;
    Test() { x = 5;}
};
 
int main()
{
   Test *t = new Test;   // new makes call to the constructor. 
                          // Here constructor is private. (if we comment line 8)
   cout << t->x; 
}