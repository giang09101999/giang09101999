#include<iostream>
#include"Data_hidden_from_outside_world.cpp"
using namespace std;

int main()
{
    int y;
    cout << "Enter value: ";
    cin >> y;
    Encapsulation obj; 
    obj.set(y); 
    cout << obj.get() << endl; 
    return 0;
}