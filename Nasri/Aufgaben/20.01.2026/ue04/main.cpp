/*
Übung 2: N Zahlen einlesen und Summe berechnen

Aufgabe: Lesen Sie zuerst eine Zahl n ein. Lesen Sie
anschließend n ganze Zahlen ein, speichern Sie sie in einem
std::vector<int> und geben Sie am Ende die Summe aus.
*/

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        v.push_back(x);
        sum += x;
    }

    std::cout << "Summe: " << sum << std::endl;
    return 0;
}

