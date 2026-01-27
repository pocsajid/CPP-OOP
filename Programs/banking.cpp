# include <iostream>
#include <iomanip>

//      funktionen vordefiniieren danach nachdem main funktion verwenden
void showBalance(double balance);
double deposit();
double withdraw(double balance);





int main(){

    //          jetzt erstellen wir ein balance und ein choice
double balance = 0;
int choice = 0;

// do bedeutet mach z.B. Textausgabe 
do{
    std::cout << "Enter your choice: \n";
    std::cout << "**************    **************  ************\n";
    std::cout << "**************    **************  ************\n";
    std::cout << "1 Show Balance\n";
    std::cout << "2 Deposit Money\n";
    std::cout << "3 Withdraw Balance\n";
    std::cout << "4 Exit\n";
    std::cin>>choice;

    std::cin.clear();   //flushes out all the 

    fflush(stdin); //flushes out the outputs
    
    

switch(choice){

    //      wir müssen vershiedene case scenarien erstellen
    case 1: showBalance(balance);
                break;
//          case 2 werden ein funktion ausrufen, wie z.B. showbalance und automatisch durch witdrawn balance mit die eingezahlende menge erfüllen
    case 2: balance += deposit();
                showBalance(balance);
                break;
        //   case 3 ist withdraw und es wird von der aktuell Kontostand abziehen der eingegebene Menge
    case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
    //       der Program bedankt, dass du besucht hast.
    case 4: std::cout << "Thanks for visiting!\n";
                break;
    //      als standard es verlangt ein von die auswahl, außerdem gibt invalid choice eingabe.
    default: std::cout <<"Invalid choice";
}

//          solange unserer auswahl weniger als 4 ist, irgendeine Bedingung ist erfüllt.
}while(choice != 4);



return 0;
}

void showBalance(double balance){

    //wir stellen prezisierung zum 2 und mit fixed geben wir Kontostand aus
    std::cout<< "Your Balance is: €" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){
    double amount = 0;

    
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){

    return amount;
    }else{
        std::cout << "That!s not a valid amount: ";
    }
}



double withdraw(double balance){
    double amount = 0;

    std::cout<< "Enter the amount to be withdrawed! :";
    std::cin>>amount;


if(amount > balance){
    std::cout<< "insufficient funds";
    return 0;
}else if(amount < 0){
    std::cout<<"That's not a valid amount!\n";
    return 0;
}
   return amount;
}