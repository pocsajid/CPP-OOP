#include <iostream>

int main() {
    double price;
    int count;

    std::cout << "Preis pro Stueck: ";
    std::cin >> price;

    std::cout << "Anzahl: ";
    std::cin >> count;

    double total = price * count;

    std::cout << "Gesamt: " << total << std::endl;

    // Bonus: Durchschnitt (hier sinnvoll, um Division zu ueben)
    if (count != 0) {
        std::cout << "Durchschnitt pro Stueck: " << (total / count) << "\n";
    }

    return 0;
}
