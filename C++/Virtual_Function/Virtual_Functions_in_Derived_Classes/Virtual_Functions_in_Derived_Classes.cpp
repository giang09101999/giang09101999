#include<iostream>
using namespace std;

class A
{
    public:
        virtual void func()
        {
            cout << "Function A is called" << endl;
        }
};

class B : public A
{
    public:
        void func()
        {
            cout << "Function B is called" << endl;
        }
};

class C : public B
{
    public:
        void func()
        {
            cout << "Function C is called" << endl;
        }
};