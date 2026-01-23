#include "Rechteck.h"

double Rechteck::getLaenge() {
    return laenge;
}

double Rechteck::getBreite() {
    return breite;
}

void Rechteck::setLaenge(double laenge) {
    this->laenge = laenge;
}

void Rechteck::setBreite(double breite) {
    this->breite = breite;
}

double Rechteck::berechneFlaecheninhalt() {
    return laenge * breite;
}