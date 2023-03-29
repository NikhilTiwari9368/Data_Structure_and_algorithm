#include<iostream>
using namespace std;

class College
{
    public:
    void fun()
    {
        cout<<"I am a function with no arguments" << endl;
    }
    void fun(int x)
    {
        cout<<"I am function with int argumnets" << endl;
    }
    void fun(double x)
    {
        cout<<"I am a function with double argument"<<endl;
    }
};

int main()
{
    College obj;
    obj.fun();
    obj.fun(3);
    obj.fun(6.2);
}