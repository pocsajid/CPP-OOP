#include <iostream>
#include <string>

class Person {

private:
    std::string name;
    unsigned short int geburtsjahr;

    // Standardkonstruktor versteckt
    Person();

public:
    Person(std::string, unsigned short int);
    ~Person();

    unsigned short int getAlter();
};
