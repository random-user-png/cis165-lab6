#include <iostream>
#include <iomanip>

int main()
{
    double weight, height, bmi;

    std::cout<<"Enter a weight in pounds: ";
    std::cin>>weight;

    if (weight <= 0)
    {
        std::cout<<"ERROR: Weight must be greater than 0";
        return 0;
    };

    std::cout<<"Enter a height in inches: ";
    std::cin>>height;

    if (height <= 0)
    {
        std::cout<<"ERROR: Height must be greater than 0";
        return 0;
    };

    bmi = weight * 703.0 / (height * height);

    if (bmi < 18.5)
    {
        std::cout<<"You are underweight. Your BMI is ";
        std::cout<<std::fixed<<std::setprecision(2)<<bmi;
    }

    else if (bmi <= 25.0)
    {
        std::cout<<"You are of optimal weight. Your BMI is ";
        std::cout<<std::fixed<<std::setprecision(2)<<bmi;
    }

    else
    {
        std::cout<<"You are overweight. Your BMI is ";
        std::cout<<std::fixed<<std::setprecision(2)<<bmi;
    }

    return 0;
}