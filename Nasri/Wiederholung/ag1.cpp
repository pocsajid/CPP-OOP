#include <iostream>
using namespace std;

int gebezahl();   // deklaráció

int main() {
    int zahl;

    zahl = gebezahl();   // függvény visszaad egy számot

    cout << zahl << '\n';

    return 0;
}

int gebezahl() {
    int zahl;
    cout << "Geben Sie bitte eine Zahl ein: ";
    cin >> zahl;
    return zahl;   // VISSZAADJUK
    
}
