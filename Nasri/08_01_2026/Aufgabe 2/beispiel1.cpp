#include <iostream>

int main(){


    int zahl;

    std::cout<<"Geben Sie eine Zahl ein!: ";
    std::cin>>zahl;

    if(zahl % 2 == 0){
        std::cout<<"Deine Zahl is Gerade!\n";
    }else{
        std::cout<<"Deine Zahl ist ungerade! \n";
    }




    return 0;
}