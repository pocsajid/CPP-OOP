#ifndef FAHRZEUG_H
#define FAHRZEUG_H 

class Fahrzeug {

    private:
        double aktuelleGeschwindigkeit;
        double gewicht;

    public:
        Fahrzeug(); /* Standardkonstruktur */
        ~Fahrzeug(); /* Destruktur */

        void gibSignal();
};

#endif