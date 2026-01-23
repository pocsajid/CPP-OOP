/*
Übung 2: Erstes Vorkommen finden und löschen (mit erase)

Aufgabe: Lesen Sie n und danach n Zahlen in einen Vektor. Lesen
Sie dann eine Zahl x ein. Falls x im Vektor vorkommt, löschen Sie das
erste Vorkommen (mit erase). Geben Sie danach den Vektor aus (bzw.
eine Meldung, falls x nicht gefunden und daher nichts gelöscht
wurde).

v.erase(v.begin() + i); /* i ist Index */

*/

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        v.push_back(a);
    }

    int x;
    std::cin >> x;

    bool removed = false;
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (v[i] == x) {
            v.erase(v.begin() + i);
            removed = true;
            break;
        }
    }

    if (removed == false) {
        std::cout << "Nicht gefunden." << std::endl;
    } else {
        for (std::size_t i = 0; i < v.size(); ++i) {
            std::cout << v[i];
            if (i + 1 < v.size()) std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
