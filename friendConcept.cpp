#include<iostream>
using namespace std;

class Car
{
    private:
        int number;
    protected:
        string name;
    public:
        Car()
        {
            number=100;
            name="Datsun";
        }
        friend class Bike;   //Bike is friend of Car so, bike can access all members of car. but not vice-versa.
};

// We can declare friend class or function anywhere in the base class body 
// whether its private, protected or public block. It works all the same.

class Bike
{   
    public:
        void print(Car &obj)
        {
            cout<<"Name: "<<obj.name<<" Number: "<<obj.number<<endl;
        }
};

int main()
{
    Car C;
    Bike B;
    B.print(C);
    return 0;
}


// Friend function: Same as friend class, friend function also can access private or any data 
// from the class where it is mentioned as friend.
// They are the non-member functions that can access and manipulate the private 
// and protected members of the class for they are declared as friends.