#include <iostream>

int main() {

    //in the insert method, you have insert the position of your string, then the character that you want to insert into your string 

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
  
    std::cout << name.insert(0, "@");    

    return 0;

}