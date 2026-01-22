#include <iostream>

class Auto{
    private:
    unsigned short int ps = 80;
    unsigned short int nm = 150;


    public:
    Auto ();
    Auto(){
    unsigned short int ps = 80;
    unsigned short int nm = 150;
    
    }
};


int main(){
    Auto auto1;
    Auto auto2;
    Auto auto3;

    std::cout << auto1.ps << '\n';
    std::cout << auto1.nm << '\n';


    return 0;
}