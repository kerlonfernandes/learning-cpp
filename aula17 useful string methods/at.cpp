#include <iostream>

int main() {

    //the at method, return the content of the position than you defined
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
  
    std::cout << name.at(0);    

    return 0;

}