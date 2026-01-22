#include <iostream>

#include "Form.h"
#include "Kreis.h"
#include "Rechteck.h"
#include "Dreieck.h"

int main() {
    double flaecheninhalt;

    Form form1;
    flaecheninhalt = form1.berechneFlaecheninhalt();
    std::cout << "Flaecheninhalt form1: " << flaecheninhalt << std::endl;

    Kreis kreis1;
    kreis1.setRadius(1);
    flaecheninhalt = kreis1.berechneFlaecheninhalt();
    std::cout << "Flaecheninhalt kreis1: " << flaecheninhalt << std::endl;

    /* Polymorphie */
    

    return 0;
}