#include<iostream>

int main()
{
    float math, physics, chemistry, average_score;

    std::cout << "Enter math score: ";
    std::cin >> math;    
    
    std::cout << "Enter physics score: ";
    std::cin >> physics;    
    
    std::cout << "Enter chemistry score: ";
    std::cin >> chemistry;

    average_score = (math + physics + chemistry)/3;

    if ((math < 0)|(math > 10)|(physics < 0)|(physics > 10)|(chemistry < 0)|(chemistry > 10))
    {
        std::cout << "Input error!!" << std::endl;
        exit(0);
    }

    if(average_score >= 8)
    {
        if (((math < 6.5)&(math >= 5))|((physics < 6.5)&(physics >= 6.5))|((chemistry < 6.5)&(chemistry >= 5)))
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Credit" << std::endl;
        }
        else if (((math < 5)&(math >= 3))|((physics < 5)&(physics >= 3))|((chemistry < 5)&(chemistry >= 3)))
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Average" << std::endl;
        }        
        else
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Excellent" << std::endl;            
        }
    }

    else if((average_score < 8)&(average_score >= 6.5))
    {
        if(((math < 5)&(math >= 3))|((physics < 5)&(physics >= 3))|((chemistry < 5)&(chemistry >=3)))
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Average" << std::endl; 
        }
        else if((math < 3)|(physics < 3)|(chemistry < 3))
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Bad" << std::endl;            
        }
        else
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Credit" << std::endl;            
        }
    }

    else if ((average_score >= 5)&(average_score < 6.5))
    {
        if((math < 3)|(physics < 3)|(chemistry < 3))
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Bad" << std::endl;            
        }
        else
        {
            std::cout << "Your score is: " << average_score << std::endl;
            std::cout << "Average" << std::endl;            
        }
    }
    else
    {
        std::cout << "Your score is: " << average_score << std::endl;
        std::cout << "Bad" << std::endl;            
    }


}