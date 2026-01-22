/*Lesen sie n ein, dann n gante Zahlen in einen std::vectir<int>. Lesen Sie anschliesend eine Zahl x ein und zählen Sie wie oft x im Vektor vorkommt. Geben Sie die Anzahl aus.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
