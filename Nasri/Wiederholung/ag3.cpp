#include <iostream>
    int add(int a, int b){
        return a + b;
    }


    int subst(int a, int b){
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








    return 0;
}