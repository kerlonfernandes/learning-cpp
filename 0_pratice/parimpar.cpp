#include<iostream>

int main() {

    int n;

    std::cout << "Qual numero deseja descobrir se é par ou impar?: ";
    std::cin >> n;
    
    if(n % 2 == 0) {
        std::cout << "Numero Par";
    }
    else {
        std::cout << "Numero Impar"; 
    }
    
    return 0;

}