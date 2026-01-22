#include "Kreis.h"

double Kreis::getRadius() {
    return radius;
}
void Kreis::setRadius(double radius) {
    this->radius = radius;
}

double Kreis::berechneFlaecheninhalt() {
    return radius * radius * 3.14;
}