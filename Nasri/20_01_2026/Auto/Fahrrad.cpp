#include <iostream>

#include "Fahrrad.h"

Fahrrad::Fahrrad() {

}

Fahrrad::~Fahrrad() {

}

void Fahrrad::gibSignal() {
    std::cout << "Fahrzeug: Klingeling!" << std::endl;
}