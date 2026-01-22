#include "Rechteck.h"


double Rechteck::getLaenge(){
    return laenge;
}

double Rechteck::getBreite(){
    return breite;
}

void Rechteck::setLaenge(double laenge){
    this->laenge = laenge;
}


void Rechteck::setBreite(double laenge){
    this->breite = breite;
}

double::berechneFlaecheninhalt(){
    return laenge * breite;
}




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