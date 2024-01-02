#include <iostream>

int main()
{

    // && = check if two conditions are true
    // || check if at least one of two conditions is true
    // ! = reserves the logical state of its operand
    bool sunny;
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "The temperature is good!";
    }
    else
    {
        std::cout << "The temperatue is bad!";
    }

    if (sunny)
    {
        std::cout << "It is sunny outside";
    }
    else
    {
        std::cout << "It is cloudy outside";
    }

    return 0;
}