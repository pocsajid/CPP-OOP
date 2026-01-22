#include <iostream>

#include "Fahrzeug.h"


bool Fahrzeug::fahren(int anzahlKm) {
    std::cout << "Fahre " << anzahlKm << "Km: Brumm-Brumm." <<std::endl;
    return true;
}

void Fahrzeug::bremsen(){
    std::cout << "ich bremse und stehe nun." <<std::endl;
}
