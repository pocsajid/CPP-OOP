#include <iostream>
#include <vector>

int main() {
    std::vector<int> zahlen = { 7, 3, 9, -2, 5, 1 };

    int minimum = zahlen[0];
    int maximum = zahlen[0];

    for (int i = 1; i < zahlen.size(); i++) {
        if (zahlen[i] < minimum) {
            minimum = zahlen[i];
        }

        if (zahlen[i] > maximum) {
            maximum = zahlen[i];
        }
    }

    std::cout << "Minimum: " << minimum << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;

    return 0;
}