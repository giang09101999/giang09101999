#include<iostream>
#include<string>
class Salary
{
public:
    double employee_number, manager_number, director_number;
    double employee_salary, manager_salary, director_salary;
    double revenue, cost;
    Salary(double revenue)
    {
        std::cout << "Enter revenue: ";
        std::cin >> revenue;
        this->revenue = revenue; 
        std::cout << "Enter number of employees: ";
        std::cin >> employee_number;
        std::cout << "Enter number of managers: ";
        std::cin >> manager_number;
        std::cout << "Enter number of directors: ";
        std::cin >> director_number;        
        cost = (revenue*30)/100;
        employee_salary = (((cost*70)/100)/employee_number);
        manager_salary = (((cost*15)/100)/manager_number);
        director_salary = (((cost*15)/100)/director_number);
        
    }
    void Display()
    {
        std::string Cost = std::to_string(cost);
        std::string employee_string = std::to_string(employee_salary);
        std::string mananger_string = std::to_string(manager_salary);
        std::string director_string = std::to_string(director_salary);
        std::cout << "Cost: " << Cost << std::endl; 
        std::cout << "Salary of each employees: " << employee_string << std::endl;
        std::cout << "Salary of each managers: " << mananger_string << std::endl;
        std::cout << "Salary of each directors: " << director_string << std::endl;
    }
};

int main()
{   
    double revenue;
    Salary salary(revenue);
    salary.Display();
}