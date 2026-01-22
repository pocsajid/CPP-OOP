#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;


    std::cout<<"Geben Sie die erste Zahl ein: ";
    std::cin>>num1;
    std::cout<<"Geben Sie die erste Zahl ein: ";
    std::cin>>num2;

    std::cout<<"Geben sie ein operator ein + - * /";
    std::cin>>op;


  switch(op){
        case '+':
        result = num1 + num2;
        std::cout<< "Result:" << result<< '\n';
        break;

        case '-':
        result = num1 - num2;
        std::cout<< "Result:" << result<< '\n';
        break;

        case '*':
        result = num1 * num2;
        std::cout<< "Result:" << result<< '\n';
        break;
        case '/':
        result = num1 / num2;
        std::cout<< "Result:" << result<< '\n';
        break;
  }

    





    return 0;
}