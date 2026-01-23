#include <iostream>

int main() {
    double x, y;
    char op;

    std::cout << "Zahl 1: ";
    std::cin >> x;

    std::cout << "Operator (+ - * /): ";
    std::cin >> op;

    std::cout << "Zahl 2: ";
    std::cin >> y;

    bool ok = true;
    double result = 0.0;

    switch (op) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y == 0.0) {
                std::cout << "Fehler: Division durch 0." << std::endl;
                ok = false;
            } else {
                result = x / y;
            }
            break;
        default:
            std::cout << "Fehler: Unbekannter Operator.\n";
            ok = false;
            break;
    }

    if (ok) {
        std::cout << "Ergebnis: " << result << "\n";
    }

    return 0;
}
