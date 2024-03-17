#include<iostream>
#include"Virtual_Functions_in_Derived_Classes.cpp"
using namespace std;

int main()
{
    C c;
    B *b;
    b = &c;
    b->func();
}