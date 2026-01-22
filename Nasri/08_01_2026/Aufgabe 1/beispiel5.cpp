#include <iostream>
//

using std;
// wenn wir das schreiben dann können wir std:: weglassen
// std:: ist ein Namesraum und 2 cout kann nicht innerhalb einem namesraum stehen


int main(){

    double price;
    int count;

//                  << es schickt die "Hallo welt" zu characterausgabe
    std::cout<<"Preis pro Stück: ";
    std::cin>>price;

    std::cout<<"Anzahl: ";
    std::cin>>count;


    double total = price * count;

    std::cout<< "Gesamt: "<<total << "\n";




    return 0;
}