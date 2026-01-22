#include <iostream>

int main(){

    //pseudo-random = not fully random but close
    // modulo is, it divides the number as long as it is the leftover is a whole number.

    srand(time(NULL));

    int num1 = (rand() % 100)+1;
    int num2 = (rand() % 100)+1;
    int num3 = (rand() % 100)+1;
    int num4 = (rand() % 100)+1;
    int num5 = (rand() % 100)+1;

    std::cout << num1<< '\n';
    std::cout << num2<< '\n';
    std::cout << num3<< '\n';
    std::cout << num4<< '\n';
    std::cout << num5<< '\n';

    return 0;
}