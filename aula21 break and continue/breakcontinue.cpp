#include <iostream>

int main () {

    for(int i = 0; i <= 20; i++) {

        // if(i == 13) break; // will stop your program it reaches in 13

        if(i == 13) continue; // will skip 13 and continue from there

        std::cout << i << std::endl;

    }

    return 0;

}

