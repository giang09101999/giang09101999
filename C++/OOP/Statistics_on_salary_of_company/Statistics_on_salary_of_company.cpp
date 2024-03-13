#include<iostream>
#include<string>
using namespace std;
class Salary
{
private:
    double employee_number, manager_number, director_number;
    double employee_salary, manager_salary, director_salary;
    double revenue, cost;
public:
    Salary()
    {
        cout << "Enter revenue: ";
        cin >> revenue;
        cout << "Enter number of employees: ";
        cin >> employee_number;
        cout << "Enter number of managers: ";
        cin >> manager_number;
        cout << "Enter number of directors: ";
        cin >> director_number;        
        cost = (revenue*30)/100;
        employee_salary = (((cost*70)/100)/employee_number);
        manager_salary = (((cost*15)/100)/manager_number);
        director_salary = (((cost*15)/100)/director_number);
        
    }
    void Display()
    {
        string Cost = to_string(cost);
        string employee_string = to_string(employee_salary);
        string mananger_string = to_string(manager_salary);
        string director_string = to_string(director_salary);
        cout << "Cost: " << Cost << endl; 
        cout << "Salary of each employees: " << employee_string << endl;
        cout << "Salary of each managers: " << mananger_string << endl;
        cout << "Salary of each directors: " << director_string << endl;
    }
};

int main()
{   

    Salary salary;
    salary.Display();
}