#include<iostream>
using namespace std;

class Account
{
    int amount;
    public:
        Account()
        {
            amount=100;
        }
        void print()
        {
            cout<<"amount: "<<amount<<endl;
        }
        Account& operator += (double b)
        {
            amount += b;
            return *this;
        }
};

int main()
{
    Account a;
    a.print();
    a+=100;
    a.print();
    return 0;
}

// A simple eg can be '+' operator: Simply overload it to add two objects.
