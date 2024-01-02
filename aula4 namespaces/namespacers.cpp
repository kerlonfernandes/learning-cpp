#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {

    using std::cout;

    std::string name = "Kerlon";

    cout << "Hello " << name;

    return 0;
}