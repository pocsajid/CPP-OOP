#include <iostream>


//The logic in the nested loop is we can setup a Function that is running as long the Minifunction reaches the value that is set
//After it reaches the value we want it runs again, and again, and again.
int main(){


int rows;
int columns;
char symbol;

std::cout << "How many rows?: ";
std::cin>> rows;

std::cout << "How many columns?: ";
std::cin>> columns;

std::cout<< "Enter a symbol to use: ";
std::cin>> symbol;


for(int i = 1; i<=rows; i++){

    for(int j = 1; j<=columns; j++){
    std::cout << symbol <<' ';
}
std::cout<<'\n';

}

    return 0;
}