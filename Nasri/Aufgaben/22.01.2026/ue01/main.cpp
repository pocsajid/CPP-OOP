/*
Übung 1: Vorkommen einer Zahl zählen

Aufgabe: Lesen Sie n ein, dann n ganze Zahlen in einen
std::vector<int>. Lesen Sie anschließend eine Zahl x ein und
zählen Sie, wie oft x im Vektor vorkommt. Geben Sie die
Anzahl aus.
*/

#include <iostream>
#include <vector>

int main() {
    
    /* --- */

    /* Einlesen von n (n ist Anzahl der Zahlen, die gleich
        der Benutzer eingeben soll.)*/
    int n;
    std::cin >> n;

    /* --- */

    /* Computer fragent Benutzer nach den n (siehe oben) Zahlen und speichert
       die Eingaben in Vektor v */
    std::vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        v.push_back(a); /* Füge an das Ende des Vektors v die Zahl a an. */
    }


    /* Frage den Benutzer nach der Zahl, dessen Anzahl in
        Vektor v bestimmt werden soll. */
    int x; /* x ist zu zählende Zahl */
    std::cin >> x;

    int count = 0;
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (v[i] == x) ++count;
    }

    std::cout << "Vorkommen: " << count << std::endl;
    return 0;
}
