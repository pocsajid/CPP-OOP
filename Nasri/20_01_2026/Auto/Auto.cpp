#include <iostream>

#include "Auto.h"

Auto::Auto() {

}

Auto::~Auto() {

}

void Auto::gibSignal() {
    std::cout << "Auto: Hup-Hup!" << std::endl;
}