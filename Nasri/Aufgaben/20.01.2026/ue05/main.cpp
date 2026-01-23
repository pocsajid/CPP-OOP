/*
Übung 3: Elemente zählen (z. B. größer als 0)

Aufgabe: Erstellen Sie einen Vektor mit folgenden
Werten: -2, 5, 0, 7, -1, 3. Zählen Sie, wie viele Elemente
größer als 0 sind, und geben Sie die Anzahl aus.
*/

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {-2, 5, 0, 7, -1, 3};
    
    /* Alternative mit push_back:
    v.push_back(-2);
    v.push_back(5);
    v.push_back(0);
    v.push_back(7);
    v.push_back(-1);
    v.push_back(3);
    */
    
    int countPos = 0;
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (v[i] > 0) ++countPos;
    }

    std::cout << "Anzahl > 0: " << countPos << std::endl;
    return 0;
}
