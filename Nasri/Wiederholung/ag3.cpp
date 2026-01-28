#include <iostream>
    int summe(int a, int b){
        return a + b;
    }


    int differenz(int a, int b){
        return a - b;
    }


    int multi(int a, int b){
        return a * b;
    }


    double divi(double a, double b){
          if (b == 0) {
        std::cout << "Division durch 0 nicht erlaubt!\n";
        return 0;
    }
        return a / b;
    }

        void menu(){
        std::cout << "\n--- MENÜ ---\n";
        std::cout << "1 - Summe\n";
        std::cout << "2 - Differenz\n";
        std::cout << "3 - Produkt\n";
        std::cout << "4 - Division\n";
        std::cout << "0 - Beenden\n";
        std::cout << "Ihre Wahl: ";
        }








int main(){

    int a, b;
    int wahl;


    do(){
        menu();
        std::cin>>wahl;

        if(wahl == 0){
            std::cout<<"Program beendet\n";
            break;
        }

        std::cout<<"Geben Sie a ein!: ";
        std::cin>>a;

        std::cout<<"Geben Sie b ein!: ";
        std::cin>>b;



    }

    switch (wahl){
        case 1: 
        std::cout<< "Summe: " << summe(a, b)<< '\n';
        break;

        case 2:
        std::cout<< "Differenz: "<< differenz(a, b)<<'\n';
        break;

        case 3:
        std::cout<< "Multiplizierung: " << multi(a, b)<<'\n';
        break;

        case 4:
        std::cout<<"Substraktion: "<< divi(a, b)<<'\n';
        break;

        default:
        std::cout << "Ungültige Auswahl!\n";   

    }







    return 0;
}