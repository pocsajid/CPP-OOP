#ifndef FAHRRAD_H
#define FAHRRAD_H 

#include "Fahrzeug.h"

class Fahrrad : public Fahrzeug {

    private:
        double anzahlGaenge;

    public:
        Fahrrad(); /* Standardkonstruktur */
        ~Fahrrad(); /* Destruktur */

        void gibSignal();
};

#endif