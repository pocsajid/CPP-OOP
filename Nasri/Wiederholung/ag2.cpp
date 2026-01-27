#include <iostream>

    int summe(int a, int b){

        //wir geben hier als return was wir machen wollen
        
        return a + b;


    }

    int divider(int a, int b){

        return a / b;

    }

void werten(int a, int b){
    std::cout<< a * b <<'\n' << "So kann man das machen" <<'\n';
}

// hier keine erwartete zahl, ausgabe nicht in return definiert sondern in cout
void variieren(){
    int x;
    std::cout<<"Geben Sie ihrer X Zahl ein: ";
    std::cin>> x;

    std::cout<<"Deine X ist: "<< x << '\n';
    std::cout << "Jetzt geht los!\n"; 
}

void verdoppelt(int &zahl){
    zahl = zahl *2;

}

void quadratisch(int &quad){
    quad = quad * quad;
}


int main(){




  int a, b;

    std::cout << "Geben Sie a ein: ";
    std::cin >> a;

    std::cout << "Geben Sie b ein: ";
    std::cin >> b;

    int summa = summe(a, b);

    std::cout << "Summe: " << summa <<'\n';

    int divide = divider(a, b);

    std::cout << "Dividieren: " << divide << '\n';
    


    
    werten(9,5);

    variieren();

    int z;
    std::cout<<"Jetzt bitte Z ein: ";
    std::cin>> z;
    verdoppelt(z);
    std::cout<<"Maaamaaa meine Z ist: "<< z <<'\n';

    quadratisch(z);

    std::cout<<"Ich glaube ich habe Quadratisch geschaft: " <<z;

    return 0;
}