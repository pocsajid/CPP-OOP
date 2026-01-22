#include "Fahrzeug.h"

class Fahrrad : public Fahrzeug {          /*Fahrrad erbt von Fahrzeug*/

private:
    int gaenge;

public:
    void klingeln();
};