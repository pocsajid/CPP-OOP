#include <iostream>

std::string concateStrings(std::string string1, std::string string2);


int main(){
// so basically at first glance we defined the function on the first place, then we need to define the string values in the main
// after that in the function we have defined what do we want back to our main function



    std::string firstName = "Bro";
    std::string lastName = "Code";
    std::string fullName = concateStrings(firstName, lastName);

    std::cout<< "Hello " << fullName<< '!';
    return 0;
}

std::string concateStrings(std::string string1, std::string string2){

    return string1 + " " + string2;
}