#include<iostream>

class Encapsulation
{
private:
    int x;

public:
    void set (int a)
    {
        x = a;
    }

    int get()
    {
        return x;
    }
};