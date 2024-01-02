#include <iostream>

int main() {

    //the clear method remove all the content of your variable
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    name.clear();
    std::cout << "Hello " << name;    

    return 0;

}