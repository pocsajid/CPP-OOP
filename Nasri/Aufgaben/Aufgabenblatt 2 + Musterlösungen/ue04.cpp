#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string city;

    std::cout << "Bitte Name eingeben: ";
    std::cin >> name;

    std::cout << "Bitte Stadt eingeben: ";
    std::cin >> city;

    std::cout << "Hallo " << name << " aus " << city << std::endl;

    return 0;
}
