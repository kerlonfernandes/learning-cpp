#include <iostream>
#include <ctime>

int main()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    std::cout << "********** NUMBER GUESSING GAME **********\n";

    do {
        std::cout << "Enter a guess between (1 - 100): ";
        std::cin >> guess;
        tries++;

        if(guess > num) {

            std::cout << "Too high!\n";
        }
        else if(guess < num) {
            std::cout << "Too Low!\n";
        }
        else {
            std::cout << "Correct! # if tries " << tries << std::endl;
        }
    }
    while (guess != num);
    
        std::cout << "***************************************\n";


    return 0;
}
