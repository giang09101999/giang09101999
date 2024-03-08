#include<iostream>

class Number
{
    public:
    int a = 3;
};

int main()
{
    Number num;
    
    std::cout << "The number: " << num.a << std::endl;
}