#ifndef KREIS_H
#define KREIS_H

#include "Form.h"

class Kreis : public Form {

    private:
        double radius;

    public:
        double getRadius();
        void setRadius(double);
        double berechneFlaecheninhalt();
        
};

#endif