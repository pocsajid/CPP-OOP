#include <iostream>

int main() {
    int value;
    long long sum = 0;
    int count = 0;

    std::cout << "Geben Sie Zahlen ein (0 beendet):\n";

    while (true) {
        std::cout << "Zahl: ";
        std::cin >> value;

        if (value == 0) {
            break;
        }

        sum += value;
        count++;
    }

    std::cout << "Summe: " << sum << std::endl;
    std::cout << "Anzahl: " << count << std::endl;

    if (count > 0) {
        double avg = (double)sum / count;
        std::cout << "Durchschnitt: " << avg << "\n";
    } else {
        std::cout << "Kein Durchschnitt (keine Zahlen eingegeben).\n";
    }

    return 0;
}
