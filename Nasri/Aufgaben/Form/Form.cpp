#include <string>

#include "Form.h"

void Form::setBezeichnung(std::string bezeichnung) {
    this->bezeichnung = bezeichnung;
}

std::string Form::getBezeichnung() {
    return bezeichnung;
}

double Form::berechneFlaecheninhalt() {
    return -1;
}