#include "Dreieck.h"

double Dreieck::getGrundseite() {
    return grundseite;
}

double Dreieck::getHoehe() {
    return hoehe;
}

void Dreieck::setGrundseite(double grundseite) {
    this->grundseite = grundseite;
}

void Dreieck::setHoehe(double hoehe) {
    this->hoehe = hoehe;
}

double Dreieck::berechneFlaecheninhalt() {
    return 0.5 * (grundseite * hoehe);
}