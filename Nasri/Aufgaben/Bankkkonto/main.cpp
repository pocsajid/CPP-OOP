#include <iostream>
#include <string>

class Bankkonto {

    private:
    /* Erst einmal die Attribute (Eigenschaften) */
    std::string iban;
    std::string bic = "SOLADEST600";
    std::string kontoinhaber;
    float kontostand;
    float dispolimit;

    /* Konstruktur(en) */
    Bankkonto() { /* Standardkonstruktor  */
        
    }

    public:
    Bankkonto(std::string iban, std::string kontoinhaber, float dispolimit) {
       kontostand = 0;
       
       this->iban = iban;
       this->kontoinhaber = kontoinhaber;
       this->dispolimit = dispolimit;
    }

    /* Hier die Methoden (Fähigkeiten) */
    bool abheben(float betrag) {
        if(kontostand + dispolimit >= betrag) {
            kontostand -= betrag;
            return true;
        }

        return false;
    }

    void einzahlen(float betrag) {
        kontostand += betrag;
    }

    float getKontostand() {
        return kontostand;
    }
};

int main() {
    Bankkonto konto("DE65012345667897435", "Rainer Zufall", 0);
    
    konto.einzahlen(210.00);

    bool hatfunktioniert = konto.abheben(100.00);
    if(hatfunktioniert == false) {
        std::cout << "Keine Deckung vorhanden." << std::endl;
    }
    else {
        std::cout << "OK" << std::endl;
    }

    std::cout << "Neuer Kontostand: " << konto.getKontostand() << " Euro" << std::endl;

    return 0;
}