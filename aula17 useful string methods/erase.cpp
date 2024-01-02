#include <iostream>

int main() {
    // the erase method, literally erase where you define at your string
    

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
  
    std::cout << name.erase(0, 3);    

    return 0;

}