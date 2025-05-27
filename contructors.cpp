#include<iostream>

using namespace std;

class Account
{
    int balance;
    public:
        Account()       //default constructor  -> always do shallow copy.
        {
            balance=500;
        }
        Account(int balance)
        {
            this->balance=balance;
        }
        Account(Account &obj2)      //copy constructor
        {
            this->balance=obj2.balance;
        }       
        void print();
}; 
void Account::print()
{
    cout<<balance<<endl;
}

int main()
{
    Account obj(4000);
    Account obj2(obj);
    //Account obj3(obj);
    obj.print();
    return 0;
}