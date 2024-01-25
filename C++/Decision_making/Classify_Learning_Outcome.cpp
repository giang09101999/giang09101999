#include<iostream>

void excellent(float score, float Math, float Physics, float Chemistry)
{
    if(((Math < 6.5)&(Math >= 5))|((Physics < 6.5)&(Physics >= 5))|((Chemistry < 6.5)&(Chemistry >= 5)))
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Credit" << std::endl;
        exit(0);
    }
    
    else if (((Math < 5)&(Math >= 3))|((Physics < 5)&(Physics >= 3))|((Chemistry < 5)&(Chemistry >= 3)))
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Average" << std::endl;
        exit(0);
    }
    else
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Excellent" << std::endl;   
        exit(0);    
    }
}

void credit(float score, float Math, float Physics, float Chemistry)
{
    if(((Math < 5)&(Math >= 3))|((Physics < 5)&(Physics >= 3))|((Chemistry < 5)&(Chemistry >= 3)))
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Average" << std::endl;
        exit(0);
    }
    else if((Math < 3)|(Physics < 3)|(Chemistry < 3))
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Bad" << std::endl;
        exit(0);
    }
    else
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Credit" << std::endl;
        exit(0);
    }    
}

void average(float score, float Math, float Physics, float Chemistry)
{
    if((Math < 3)|(Physics < 3)|(Chemistry < 3))
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Bad" << std::endl;
        exit(0);
    }
    else
    {
        std::cout << "Your score is: " << score << std::endl;
        std::cout << "Average" << std::endl;
        exit(0);        
    }
}

void bad(float score, float Math, float Physics, float Chemistry)
{
    std::cout << "Your score is: " << score << std::endl;
    std::cout << "Bad" << std::endl;
    exit(0);      
}
int main()
{
    float math, physics, chemistry, average_score;
    std::cout << "Input math score: " << std::endl;
    std::cin >> math;    
    std::cout << "Input physics score: " << std::endl;
    std::cin >> physics;    
    std::cout << "Input chemistry score: " << std::endl;
    std::cin >> chemistry;

    average_score = (math + physics + chemistry)/3;

    if((math < 0)|(math > 10)|(physics < 0)|(physics > 10)|(chemistry < 0)|(chemistry > 10))
    {
        std::cout << "Input error!!" << std::endl;
        exit(0);
    }

    if(average_score >= 8)
    {
        excellent(average_score, math, physics, chemistry);
    }
    else if ((average_score >= 6.5)&(average_score < 8))
    {
        credit(average_score, math, physics, chemistry);
    }
    else if((average_score >= 5)&(average_score < 6.5))
    {
        average(average_score, math, physics, chemistry);
    }
    else
    {
        bad(average_score, math, physics, chemistry);
    }
}