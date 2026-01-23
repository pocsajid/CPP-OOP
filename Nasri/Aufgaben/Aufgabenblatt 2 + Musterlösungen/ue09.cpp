#include <iostream>

int main() {
    int points;

    std::cout << "Punkte (0-100): ";
    std::cin >> points;

    if (points < 0 || points > 100) {
        std::cout << "Fehler: Punkte muessen zwischen 0 und 100 liegen." << std::endl;
        return 0;
    }

    int grade;
    if (points >= 90) grade = 1;
    else if (points >= 80) grade = 2;
    else if (points >= 65) grade = 3;
    else if (points >= 50) grade = 4;
    else grade = 5;

    std::cout << "Note: " << grade << "\n";

    if (points >= 50) {
        std::cout << "Bestanden.\n";
    } else {
        std::cout << "Nicht bestanden.\n";
    }

    return 0;
}
