#include <iostream>

int main(){

    // switch = alterative to using many "else if" stetements compare one value against matching cases

    char grade;
    std::cout<< "What letter grade?";
    std::cin>>grade;




    switch(grade){
        case 'A':
        std::cout<< "You did great!";
        break;

        case 'B':
        std::cout<< "You did Good!";
        break;

        case 'C':
        std::cout<< "You did okay!";
        break;

        case 'D':
        std::cout<< "You did not do good!";
        break;

        case 'F':
        std::cout<< "You did great Junky!";
        break;
        
        default:
        std::cout<< "Please only enter a letter grade A-F";


        
    }




    return 0;
}