#include <iostream>

int main() {
    int n;

    std::cout << "Bitte eine ganze Zahl eingeben: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Die Zahl ist gerade.\n";
    } else {
        std::cout << "Die Zahl ist ungerade.\n";
    }

    if (n > 0) {
        std::cout << "Die Zahl ist positiv.\n";
    } else if (n < 0) {
        std::cout << "Die Zahl ist negativ.\n";
    } else {
        std::cout << "Die Zahl ist 0.\n";
    }

    return 0;
}
