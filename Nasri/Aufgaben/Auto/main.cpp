#include <iostream>
#include <string>

class Auto {

    private:
        std::string modell;
        std::string fahrzeuginhaber;
        std::string farbe;
        float verbrauch;
        float leistung;
        std::string marke;
        unsigned short int baujahr;
        float kilometerstand;
        std::string fin;
        float tankstandLiter;
        bool motorLaeuft;
        float aktuelleGeschwindigkeit;

        Auto() { /* Standardkonstruktur */

        }

    public:
        Auto(std::string modell, std::string fahrzeuginhaber,
            std::string farbe, float verbrauch, float leistung,
            std::string marke, short int baujahr,
            float kilometerstand, std::string fin, float tankstandLiter) {

            this->modell = modell;
            this->fahrzeuginhaber = fahrzeuginhaber;
            this->farbe = farbe;
            this->verbrauch = verbrauch;
            this->leistung = leistung;
            this->marke = marke;
            this->baujahr = baujahr;
            this->kilometerstand = kilometerstand;
            this->fin = fin;
            this->tankstandLiter = tankstandLiter;

            motorLaeuft = false; /* Eine neu erzeugtes Auto hat motorLaeuft = false. */
            aktuelleGeschwindigkeit = 0; /* Eine neu erzeugtes Auto hat aktuelleGeschwindigkeit = 0. */
            
        }

        bool starten() {
            if(tankstandLiter > 0) {
                motorLaeuft = true;
                return true;
            } else {
                return false;
            }
        }

        void stoppen() {
            motorLaeuft = false;
            aktuelleGeschwindigkeit = 0;
        }
        
        void bremsen(float deltaSpeed) {
            aktuelleGeschwindigkeit -= deltaSpeed;
        }

        void beschleunigen(float deltaSpeed) {
            aktuelleGeschwindigkeit += deltaSpeed;
        }

        void fahren(float km) {
            kilometerstand += km;
            float verbrauch = (km/100) * verbrauch;
            tankstandLiter -= verbrauch;
        }

        void tanken(float liter) {
            tankstandLiter += liter;
        }
        
        void hupen() {
            std::cou  << "Hup-Hup!";
        }

        float getTankstandLiter() {
            return tankstandLiter;
        }
        
};

int main() {
    /* Instanziiere drei Autos (drei konkrete Objekte, jedes Objekt
       ist ein Individuum) */
    Auto auto1("Aygo", "Rainer Zufall", "gelb",
    7.5, 80, "Toyota", 2020, 100000, "WBS778E223232",
    32);

    Auto auto2("M2", "Chris Brysch", "schwarz",
    12.5, 460, "BMW", 2024, 1000, "WBS7JU67F421",
    32);

    Auto auto3("Fiesta", "Chris Brysch", "blau",
    5.5, 30, "Ford", 1990, 244000, "WBSU3H2U221",
    32);

    bool ok;
    ok = auto1.starten();
    if(ok == true) {
        std::cout << "Auto1 gestartet!" << std::endl;
    } else {
        std::cout << "Start fehlgeschlagen. Tanken?" << std::endl;
    }

    std::cout << "Aktueller Tankinhalt: ";
    std::cout << auto1.getTankstandLiter << std::endl;

    return 0;
}