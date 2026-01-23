/*
Übung 4: Minimum und Index finden

Aufgabe: Lesen Sie 5 ganze Zahlen ein, speichern Sie
sie in einem Vektor und bestimmen Sie das kleinste Element
sowie dessen Index (0-basiert). Geben Sie beides aus.
*/

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for (int i = 0; i < 5; ++i) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    int minVal = v[0];
    std::size_t minIdx = 0;

    for (std::size_t i = 1; i < v.size(); ++i) {
        if (v[i] < minVal) {
            minVal = v[i];
            minIdx = i;
        }
    }

    std::cout << "Minimum: " << minVal << ", Index: " << minIdx << std::endl;
    return 0;
}
