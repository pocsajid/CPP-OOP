#include "Fahrzeug.h"

class Auto : public Fahrzeug {          /*Auto erbt von Fahrzeug*/

private:
    int hubraum;

public:
    void hupen();
};