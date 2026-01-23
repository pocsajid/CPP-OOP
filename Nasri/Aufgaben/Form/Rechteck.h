#ifndef RECHTECK_H
#define RECHTECK_H

#include "Form.h"

class Rechteck : public Form {

    private:
        double laenge;
        double breite;

    public:
        double getLaenge();
        double getBreite();
        void setLaenge(double);
        void setBreite(double);
        double berechneFlaecheninhalt();
        
};

#endif