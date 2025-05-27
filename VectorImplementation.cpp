#include<iostream>
using namespace std;

class myvector{
    int capacity;
    int current;
    int *arr;
    public:
    myvector(){
        capacity=1;
        current=0;
        arr=new int[1];
    }
    void pushback(int n)
    {
        if(current == capacity) //vector is full
        {
            capacity = 2* capacity;
            int *tmp = new int[capacity];
            for(int i=0; i<current; i++)
                tmp[i]=arr[i];
            delete[] arr;
            arr=tmp;        
        }
        arr[current]=n;
            current++;
    }
    void popback(){
        if(current > 0)
            current--;
        else
            cout<<"Nothing to delete."<<endl;
    }
    void print()
    {
        for(int i=0; i<current; i++)
            cout<<arr[i]<<" ";
    }
    void cap()
    {
        cout<<current<<endl;
    }
    ~myvector() {
        cout<<"Freeing up memory."<<endl;
        delete[] arr;
    }
};

int main()
{
    myvector vec;
    vec.pushback(10);
    vec.pushback(20);
    vec.pushback(30);
    vec.pushback(40);

    vec.print();
    vec.popback();
    cout<<"\nCapacity: ";
    vec.cap();
    
    return 0;
}