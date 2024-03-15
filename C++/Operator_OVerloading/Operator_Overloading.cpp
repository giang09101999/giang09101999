#include<iostream>
using namespace std;

class Complex_number
{
private:
    int img, real;
public:
    Complex_number(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex_number operator+(Complex_number const& obj)
    {
        Complex_number res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void print()
    {
        cout << real << " + i" << img << endl;
    }

};

int main()
{
    int real_c1 = 1, img_c1 = 3, real_c2 = 4, img_c2 = 2; 

    Complex_number c1(real_c1, img_c1), c2(real_c2), c3(img_c2);
    c3 = c1 + c2;
    c3.print();
}