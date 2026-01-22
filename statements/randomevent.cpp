#include <iostream>
#include <ctime>

// here we are getting a time as the base of the random number and
//from the five cases one of them is set, you get a message with a gift

int main(){

    srand(time(0));
    int randNum=rand() %5 +1;

    switch(randNum){
        case 1: std::cout<<"You win a bumper sticker!\n";
        std::cout<<"You have 2, 3, 4, 5 left\n";
            break;
        case 2: std::cout<<"You win a T-shirt!\n";
        std::cout<<"You have 1, 3, 4, 5 left\n";
            break;
        case 3: std::cout<<"You win a Free lunch!\n";
        std::cout<<"You have 1, 2, 4, 5 left\n";
            break;
        case 4: std::cout<<"You win a Gift card!\n";
        std::cout<<"You have 1, 2, 3, 5 left\n";
            break;
        case 5: std::cout<<"You win a Concert tickets!\n";
        std::cout<<"You have 1, 2, 3, 4 left\n";
            break;
            
    }



    return 0;
}