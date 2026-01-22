#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chhoseWinner(char player, char computer);






int main(){

    char player;
    char computer;


    player = getUserChoice();
    showChoice(player);
    std::cout<<"Your choice is: ";

    showChoice(player);


    return 0;
}

char getUserChoice(){

    char player;
    std::cout << "Rock - Paper - Scissors Game!\n";
    do{

    std::cout << "*************     Choose one of the following      ****************\n";
    std::cout << "*************     ******************      ****************\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for papier\n";
    std::cout << "'s' for scissors\n";
    std::cin >> player;


    }while(player != 'r' && player != 'p' && player != 's');



   
    return 0;
}



char getComputerChoice(){


    
    return 0;
}



void showChoice(char choice){

    switch(choice){

        case 'p' : std::cout<<"Papier\n";
        break;
        case 'r' : std::cout<<"Rock\n";
        break;
        case 's' : std::cout<<"Scissors\n";
        break;
    }
    
}



void chhoseWinner(char player, char computer);