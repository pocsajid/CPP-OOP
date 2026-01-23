#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Erste Zahl: ";
    std::cin >> a;
    std::cout << "Zweite Zahl: ";
    std::cin >> b;
    std::cout << "Dritte Zahl: ";
    std::cin >> c;

    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    std::cout << "Kleinste Zahl: " << smallest << std::endl;
    std::cout << "Groesste Zahl: " << largest << std::endl;

    return 0;
}
