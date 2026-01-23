#include <string>

#include "person.h"

// Standardkonstruktor ist privat und wird absichtlich nicht nutzbar gemacht.
// Man kann ihn entweder gar nicht definieren (Linkerfehler bei Nutzung) oder so:
Person::Person() {

}

Person::Person(std::string name, unsigned short int geburtsjahr) {
     this->name = name;
     this->geburtsjahr = geburtsjahr;
}

Person::~Person() {
    // Falls keine Ressourcen manuell verwaltet werden, reicht das hier völlig.
}

unsigned short int Person::getAlter() {
    return (2026 - geburtsjahr);
}
