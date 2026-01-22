#ifndef FORM_H
#define FORM_H

#include <string>

class Form {

    private:
        std::string bezeichnung;
    
    public:
        std::string getBezeichnung();
        void setBezeichnung(std::string);
        double berechneFlaecheninhalt();

};

#endif