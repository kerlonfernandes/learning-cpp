#include<iostream>
#include<ctime>

int main()
{
    
    srand(time(NULL));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "Você ganhou 10 reais";
        break;
    
    case 2:
        std::cout << "Você ganhou 20 reais";
        break;
    
    case 3:
        std::cout << "Você ganhou 30 reais";
        break;
    
    case 4:
        std::cout << "Você ganhou 60 reais";
        break;
    
    case 5:
        std::cout << "Você ganhou 160 reais";
        break;
    
    case 6:
        std::cout << "Você ganhou 320 reais";
        break;
    
    default:
        break;
    }



    
    return 0;
}

