/*
Aufgabe
-------
1. Erstelle eine Liste von ganzen Zahlen
2. Füge die Zahlen 1, 2 und 3 zur Liste hinzu
3. Gib alle Zahlen der Liste auf dem Bildschirm aus
*/

#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> zahlen;

    // Zahlen zur Liste hinzufügen
    zahlen.push_back(1); /* willkürlich die Zahl 1 usw. */
    zahlen.push_back(2);
    zahlen.push_back(3);

    // Liste ausgeben

    /* Möglichkeit 1 */
    for (int x : zahlen) {
        cout << x << endl;
    }

    /* Möglichkeit 2 */
    for (list<int>::iterator it = zahlen.begin(); it != zahlen.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}