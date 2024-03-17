#include<iostream>
using namespace std;

class base
{
    public:
        void function_1()
        {
            cout << "Function base 1 " << endl;
        }

        virtual void function_2()
        {
            cout << "Function base 2" << endl;
        }

        virtual void function_3()
        {
            cout << "Function base 3" << endl;
        }
        virtual void function_4()
        {
            cout << "Function base 4" << endl;
        }
};

class derived : public base
{
    public:
        void function_1()
        {
            cout << "Function derived 1 " << endl;
        }    

        void function_2()
        {
            cout << "Function derived 2" << endl;
        }

        void function_4(int x)
        {
            cout << "Function derived 4" << endl;
        }
};