#include <iostream>
#include <string>

class Bankkonto {
private:
    std::string iban;
    std::string bic;
    std::string kontoinhaber;
    float kontostand;
    float dispolimit;

public:
    // Standard-Konstruktor
        Bankkonto() {
        kontostand = 0.0f;
        dispolimit = 0.0f;
    }

    // Konstruktor mit Parametern
    Bankkonto(std::string iban, std::string kontoinhaber, float dispolimit) {
        this->iban = iban;
        this->kontoinhaber = kontoinhaber;
        this->dispolimit = dispolimit;
        this->kontostand = 0.0f;
    }

    bool abheben(float betrag) {
        if (kontostand - betrag >= -dispolimit) {
            kontostand -= betrag;
            return true;
        }
        return false;
    }

    void einzahlen(float betrag) {
        kontostand += betrag;
    }

    float getKontostand() const {
        return kontostand;
    }
};

int main() {

    Bankkonto konto("DE897897897897898978", "Werbistdu Madafaka", 2000.0f);

    konto.einzahlen(210.0f);

    if (!konto.abheben(100.0f)) {
        std::cout << "Keine Deckung vorhanden\n";
    } else {
        std::cout << "Abhebung erfolgreich\n";
    }

    std::cout << "Aktueller Kontostand: "
              << konto.getKontostand() << " EUR\n";

    return 0;
}
