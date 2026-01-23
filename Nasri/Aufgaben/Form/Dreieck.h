#ifndef DREIECK_H
#define DREIECK_H

#include "Form.h"

class Dreieck : public Form {

    private:
        double grundseite;
        double hoehe;

    public:
        double getGrundseite();
        double getHoehe();
        void setGrundseite(double);
        void setHoehe(double);
        double berechneFlaecheninhalt();
        
};

#endif