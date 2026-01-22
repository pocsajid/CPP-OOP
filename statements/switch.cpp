#include <iostream>

int main(){

    // switch = alterative to using many "else if" stetements compare one value against matching cases

    int month;

    std::cout << "Enter the month(1-12): ";
    std::cin >> month;



    switch(month){
        case 1:
        std::cout<< "it is January";
        break;

        case 2:
        std::cout<< "it is February";
        break;

        case 3:
        std::cout<< "it is March";
        break;
        
        case 4:
        std::cout<< "it is April";
        break;

        case 5:
        std::cout<< "it is May";
        break;

        case 6:
        std::cout<< "it is June";
        break;

        case 7:
        std::cout<< "it is July";
        break;

        case 8:
        std::cout<< "it is August";
        break;

        case 9:
        std::cout<< "it is September";
        break;

        case 10:
        std::cout<< "it is October";
        break;

        case 11:
        std::cout<< "it is November";
        break;

        case 12:
        std::cout<< "it is December";
        break;

        default: // Default is to set a default value, somethiing like if there are no matching cases, you get a message.
        std::cout << "Please enter in only numbers (1-12) and run again";
        

    }




    return 0;
}