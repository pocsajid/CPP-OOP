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

 bool setLimit(float limit) {
    if (limit > 0 && limit < 50000) {
        dispolimit = limit;
        return true;
    } else {
        return false;
    }
}


   
};

int main() {
    Bankkonto konto("DE65012345667897435", "Rainer Zufall", 0);
    Bankkonto konto("DE65565464654454644", "Wurst Lee", 0);
    Bankkonto konto("DE65654548979797999", "Raegenkurt Hans", 0);

    konto1.einzahlen(210.00);
    konto2.einzahlen(210.00);
    konto3.einzahlen(210.00);



    bool hatfunktioniert = konto1.abheben(80.00);
    if(hatfunktioniert == false) {
        std::cout << "Keine Deckung vorhanden.\n";
    }
    else {
        std::cout << "OK\n";
    }
    
       bool hatfunktioniert = konto2.abheben(80.00);
    if(hatfunktioniert == false) {
        std::cout << "Keine Deckung vorhanden.\n";
    }
    else {
        std::cout << "OK\n";
    }

       bool hatfunktioniert = konto3.abheben(80.00);
    if(hatfunktioniert == false) {
        std::cout << "Keine Deckung vorhanden.\n";
    }
    else {
        std::cout << "OK\n";
    }



    std::cout << "Neuer Kontostand beim 1: ";
    std::cout <<  konto1.getKontostand();
    std::cout << " Euro\n";
   
    std::cout << "Neuer Kontostand beim 2: ";
    std::cout <<  konto2.getKontostand();
    std::cout << " Euro\n";

    std::cout << "Neuer Kontostand beim 3: ";
    std::cout <<  konto3.getKontostand();
    std::cout << " Euro\n";

    return 0;
}