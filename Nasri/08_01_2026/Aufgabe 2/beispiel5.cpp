#include <iostream>

int main(){

    int zahl;
    int sum = 0;
    int anzahl = 0;


    


   while(zahl){
    std::cout<<"Geben Sie ein Zahl ein!: ";
    std::cin>>zahl;

    if(zahl == 0){
        break;
    }
    
    sum += zahl;
    anzahl++;


   }

   if(anzahl > 0){
    double durchschnitt = sum / anzahl;
    std::cout<< "Anzahl nummers: "<< anzahl<<'\n';
    std::cout<<"Durchschnitt: "<< durchschnitt<<'\n';
   }








    return 0;
}