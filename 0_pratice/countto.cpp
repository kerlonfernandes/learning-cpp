#include <iostream>

int main()
{

    int n;

    std::cout << "Até que numero deseja contar ?";
    std::cin >> n;

    for (int i = 0; i <= n; i++)
    {
        std::cout << i << " ";
    }

    return 0;
}