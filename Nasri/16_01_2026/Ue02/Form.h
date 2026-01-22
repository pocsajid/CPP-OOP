#ifdef FORM_H
#define FORM_H

#include "Form.h"
#include <string>

class Form{

    private:
    std::string bezeichnung;


    public:
    std::string getBezeichnung();
    void setBezeichnung(std::string);
    double berechneFlaecheninhalt();



};



#endif