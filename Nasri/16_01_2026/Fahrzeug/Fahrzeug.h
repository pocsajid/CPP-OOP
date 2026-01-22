#ifndef FAHRZEUG_H
#define FAHRZEUG_H

class Fahrzeug {                     /*Basisklasse*/

private:
    int leistung;
    int geschwindigkeit;


public:
    bool fahren(int);
    void bremsen();
};

#endif