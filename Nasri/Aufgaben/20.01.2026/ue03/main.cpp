/*
Übung 1: Vektor anlegen, füllen, ausgeben

Aufgabe: Legen Sie einen std::vector<int> an, füllen Sie
ihn mit den Zahlen 1 bis 10 (per push_back) und geben
Sie alle Elemente in einer Zeile aus.
*/

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    for (int i = 1; i <= 10; ++i) {
        v.push_back(i);
    }

    for (std::size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i];
        if (i + 1 < v.size()) std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}
