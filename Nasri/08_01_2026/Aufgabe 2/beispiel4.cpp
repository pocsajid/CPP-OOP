#include <iostream>

int main(){

    double zahl;

    std::cout<<"Geben Sie ein zahl ein(1-100): ";
    std::cin>>zahl;


 

if(zahl > 0 && zahl < 20){
    std::cout<<"Du bist schlecht vorbereitet\n";
}else if(zahl > 20 && zahl < 40){
    std::cout<<"Du bist schlimmer vorbereitet\n";
}else if(zahl > 40 && zahl < 60){
    std::cout<<"Du bist ok vorbereitet\n";
    std::cout<<"Du hast bestanden!\n";
}else if(zahl > 60 && zahl < 80){
    std::cout<<"Du bist gut vorbereitet\n";
    std::cout<<"Du hast bestanden!\n";
}else if(zahl > 80 && zahl <= 100){
    std::cout<<"Du bist super vorbereitet\n";
    std::cout<<"Du hast bestanden!\n";
}else if(zahl > 100 || zahl < 0){
    std::cout<<"Read the description nochmals\n";
}


 



    return 0;
}