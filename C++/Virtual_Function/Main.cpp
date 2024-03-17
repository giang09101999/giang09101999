#include<iostream>
#include"Virtual_Function.cpp"
using namespace std;

int main()
{
    A a;
    A *p;
    cout<<"\n A:\n"  ;
    p=&a;
    p->Display();
    p->Show();
    cout<<"\n B:\n"  ;
    B b;
    
    p=&b;
    p->Display();
    p->Show();
}