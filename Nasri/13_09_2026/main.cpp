#include <iostream>

#include "person.h"

int main() {
    /* Person pers1; Nicht möglich, da Standardkonstruktur versteckt (private!) */

    Person pers2("Rainer Zufall", 1975); /* Ok, passt, da passender alternativer
    Konstruktur vorhanden. */
    
    Person pers3("Peter Lustig", 1946); /* Ok, passt, da passender alternativer
    Konstruktur vorhanden. */

    return 0;
}