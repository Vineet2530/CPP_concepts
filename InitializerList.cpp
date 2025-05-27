#include<iostream>
using namespace std;

class Test{
    const int t;        //const data members ko initialize sirf instializer list se hi kar skte hai. 
                        //Reason for initializing the const data member in the initializer list is because no memory is allocated separately for const data member, 
                        //it is folded in the symbol table due to which we need to initialize it in the initializer list. 
    public:
        Test(int x=6): t(x) 
        {}
        int getT(){
            return t;
        }
};
int main(){
    Test t(10);
    cout<<t.getT()<<endl;
    return 0;
}