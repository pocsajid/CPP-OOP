#include <iostream>

#include "Fahrzeug.h"


Fahrzeug::Fahrzeug() {

}

Fahrzeug::~Fahrzeug() {
    
}

void Fahrzeug::gibSignal() {
    std::cout << "Fahrzeug: Gibt ein Signal." << std::endl;
}