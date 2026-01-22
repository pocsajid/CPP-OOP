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

        Auto() {

        }

    public:
        Auto(
    std::string modell,
    std::string fahrzeuginhaber,
    std::string farbe,
    float verbrauch,
    float leistung,
    std::string marke,
    short int baujahr,
    float kilometerstand,
    std::string fin,
    float tankstandLiter
) {
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

    motorLaeuft = false;
    aktuelleGeschwindigkeit = 0;
}


        bool starten() {
            if (tankstandLiter !=0) {
        motorLaeuft = true;
        return true;
    }       else {
        return false;
    }
}


        void stoppen() {
            if (tankstandLiter !=0) {
        motorLaeuft = true;
        return true;
        }   else {
        return false;
        }

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

        }
        
        void hupen() {
            std::cout<< "Huup Huup";
            
        }

        float getTankstandLiter(){
            return tankstandLiter;
        }
        
};

int main() {
/*Instanziere 3 Autos 3 konkrete objekte jede Objekt ist ein Induviduum*/

Auto auto1("Aygo", "David", "Gelb", 7.5, 80, "Toyota", 2020, 100000, "WBS778e222324", 45);
Auto auto2("Corolla", "Klausz", "Gelb", 5, 80, "Toyota", 2012, 100000, "WBS555e222324", 65);
Auto auto3("Verso", "Zalan", "Grün", 9.5, 80, "Toyota", 2015, 130000, "WBS665e222324", 70);


bool ok;

ok = auto1.starten();
if(ok == true){
    std::cout << "Auto 1 gestartet\n";
}else{
    std::cout << "Auto 1 nicht gestartet\n";
}

std::cout<< "Aktueller Tankinhalt ";
std::cout<< auto1.getTankstandLiter() <<'\n';


auto1.hupen();


return 0;

}