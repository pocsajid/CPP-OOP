#include "Dreieck.h"



double Dreieck::getGrundseite(){
        return grundseite;
}

 double Dreieck::getHoehe(){
        return hoehe;
 }

 void Dreieck::setGrundseite(double hoehe){
    this->grundseite = grundseite;
 }

 void Dreieck::setGrundseite(double hoehe){
    this->hoehe = hoehe;
 }

 void Dreieck::berechneFlaecheninhalt(){
    return 0.5 * (grundseite * hohhe);
 }
 

class Dreieck : public Form {

    private:

    double grundseite;
    double hoehe;


    public:

    double getGrundseite();
    double getHoehe();
    void setGrund(double);
    void setHoehe(double);
    double berechneFlaecheninhalt();

    


};