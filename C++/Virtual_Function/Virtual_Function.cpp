#include<iostream>
using namespace std;

class A
{
    public:
        virtual void Display()
        {
            cout << "Display A " << endl;
        }
        void Show()
        {
            cout << "Show A " << endl;
        }
};

class B : public A
{
    public:
        void Display()
        {
            cout << "Display B" << endl;
        }
        void Show()
        {
            cout << "Show B" << endl;
        }

};