#include <iostream>
#include <string>

class Person {

    private:

    std::string name;
    unsigned short int geburtsjahr;

    /* Standardkonstruktur verstecken */
    /* Muss aufgeführt werden, auch wenn es keine
    Funktionalität enthält. */
    Person() {
        
    }

    public:

    Person(std::string name, unsigned short int geburtsjahr) {
        this->name = name;
        this->geburtsjahr = geburtsjahr;
    }

    ~Person() {
        std::cout << name << " wird zerstört! Erledigt!" << std::endl;
    }

    unsigned short int getAlter() {
        return (2026 - geburtsjahr);
    }

};