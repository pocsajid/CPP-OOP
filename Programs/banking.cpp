# include <iostream>
#include <iomanip>
void showBalance(double balance);
double deposit();
double withdraw(double balance);





int main(){

double balance = 0;
int choice = 0;


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
    case 1: showBalance(balance);
                break;

    case 2: balance += deposit();
                showBalance(balance);
                break;

    case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
                
    case 4: std::cout << "Thanks for visiting!\n";
                break;
    default: std::cout <<"Invalid choice";
}


}while(choice != 4);



return 0;
}

void showBalance(double balance){
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