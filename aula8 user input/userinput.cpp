#include <iostream>

//cout << (insetion operator)
//cin >> (extraction operator)

int main () {

    std::string name;
    int age;


    std::cout << "What's your full name ?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your age ?: ";
    std::cin >> age;


    std::cout << "Hello " << name;
    std::cout << " you are " << age << " Years old";
    return 0;
}