#include <iostream>

int main() {

    // the append method add into your string anything
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    name.append("@gmail.com");
    std::cout << "Your sugested gmail is: " << name;    

    return 0;

}