#include <iostream>


int main(){

    //if statement = do somethingif a condition is true.
    // if not then don't
    //important is when you want a statement run before something, then you should write it before it.

    int age;


    std::cout << "Enter your age: ";
    std::cin >> age;


    if(age >= 100){
        std::cout << "You are to old to enter this site!\n";
    }
    else if(age >= 18){
        std::cout<<"You are older than 18 Welcome to the site!\n";

    }else if(age < 0){
        std::cout << "You haven't been born yet";
    }
   
    else{
        std::cout << "You are not old enough to enter!\n";

    }




    return 0;
}