#include <iostream>

int main() {
    int a;
    int b;

    std::cout << "Erste Zahl: ";
    std::cin >> a;

    std::cout << "Zweite Zahl: ";
    std::cin >> b;

    int sum = a + b;

    std::cout << "Summe: " << sum << std::endl;
    std::cout << a << " + " << b << " = " << sum << std::endl;

    return 0;
}
