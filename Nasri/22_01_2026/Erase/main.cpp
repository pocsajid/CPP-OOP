#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Geben Sie wie viele Zahlen wollen sie benutzen: ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    cout<< "Geben Sie ein Zahl ein: ";
    cin >> x;

    bool gefunden = false;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            v.erase(v.begin() + i);
            gefunden = true;
            break;  // nur das erste Vorkommen löschen
        }
    }

    if (!gefunden) {
        cout << "x wurde nicht gefunden, nichts geloescht" <<'\n';
    }

    // Vektor ausgeben
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
