#include<iostream>
#include"Working_of_virtual_function.cpp"

int main()
{
    base *p;
    derived obj1;
    p = &obj1;

    p->function_1();
 
    p->function_2();
 
    p->function_3();

    p->function_4();
    return 0;
}