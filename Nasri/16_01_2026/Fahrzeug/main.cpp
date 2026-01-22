#include "Fahrzeug.h"
#include "Auto.h"
#include "Fahrrad.h"

int main(){

    Fahrzeug fahrzeug1;
    fahrzeug1.fahren(20);

    Auto auto1;
    auto1.fahren(10);

    Fahrrad fahrrad1;
    fahrrad1.klingeln();
    fahrrad1.fahren(100);
    
    return 0;
}
