#include <iostream>


void print(const std::string& mensagem) {
    std::cout << mensagem << std::endl;
}

int main() {

    int x = 5; // declaration
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';


    return 0;

}