#include <iostream>

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "You are too old to enter in this site";
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to the site!";
    }
    else if (age <= 0)
    {

        std::cout << "You haven't born yet!";
    }

    else
    {
        std::cout << "You are old enough to enter!";
    }
}