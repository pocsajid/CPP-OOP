#include <iostream>

int main() {
    int x;

    std::cout << "Bitte Zahl eingeben: ";
    std::cin >> x;

    std::cout << "Sie haben eingegeben: " << x << std::endl;
    std::cout << "x + 1 ist: " << (x + 1) << std::endl;

    return 0;
}
