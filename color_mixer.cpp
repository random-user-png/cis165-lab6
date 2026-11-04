#include <iostream>
#include <iomanip>
#include <cstring>

int main()
{
    const int COLOR_SIZE = 20;
    char first_color[COLOR_SIZE];
    std::cout << "Enter a primary color: ";
    std::cin >> std::setw(COLOR_SIZE) >> first_color;
    char second_color[COLOR_SIZE];
    std::cout << "Enter another primary color: ";
    std::cin >> std::setw(COLOR_SIZE) >> second_color;

    if ((strcmp(first_color, "red") != 0) && (strcmp(first_color, "blue") != 0) && (strcmp(first_color, "yellow") != 0))
    {
        std::cout << "Error: enter red, blue, or yellow.";
    }
    
    else if ((strcmp(second_color, "red") != 0) && (strcmp(second_color, "blue") != 0) && (strcmp(second_color, "yellow") != 0))
    {
        std::cout << "Error: enter red, blue, or yellow.";
    }

    if ((strcmp(first_color, "red") == 0) && (strcmp(second_color, "blue") == 0)) 
    {
        std::cout << "purple";
    }
    
    if ((strcmp(first_color, "blue") == 0) && (strcmp(second_color, "red") == 0)) 
    {
        std::cout << "purple";
    }
    
    if ((strcmp(first_color, "red") == 0) && (strcmp(second_color, "yellow") == 0)) 
    {
        std::cout << "orange";
    }
    
    if ((strcmp(first_color, "yellow") == 0) && (strcmp(second_color, "red") == 0)) 
    {
        std::cout << "orange";
    }
    
    if ((strcmp(first_color, "blue") == 0) && (strcmp(second_color, "yellow") == 0)) 
    {
        std::cout << "green";
    }
    
    if ((strcmp(first_color, "yellow") == 0) && (strcmp(second_color, "blue") == 0)) 
    {
        std::cout << "green";
    }
    
    if (strcmp(first_color, second_color) == 0)
    {
        std::cout << first_color;
    }

    return 0;
}
