/*
Templates are expanded at compiler time. This is like macros. 
The difference is, that the compiler does type-checking before template expansion.
*/

#include<iostream>
using namespace std;

template <typename T> 

T myMax(T x, T y)           //function template
{
    return (x>y)?x:y;
}

int main()
{
    int a=10, b=16;
    cout<<" "<<myMax(a,b)<<endl;
    float x=10.3, y=9.2;
    cout<<" "<<myMax(x,y)<<endl;
    char ch1='z', ch2='b';
    cout<<" "<<myMax(ch1,ch2)<<endl;
    return 0;
}