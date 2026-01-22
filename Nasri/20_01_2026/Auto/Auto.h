#ifndef AUTO_H
#define AUTO_H 

#include "Fahrzeug.h"

class Auto : public Fahrzeug {

    private:
        double ps;

    public:
        Auto(); /* Standardkonstruktur */
        ~Auto(); /* Destruktur */

        void gibSignal();
};

#endif