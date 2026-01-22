#include <iostream>

void happyBirthday(std::string name, int age);


int main(){

     // function = a block if reusable code

   std::string name;
   std::cout<<"Type your name: ";
   std::cin>>name;
   int age = 21;


    happyBirthday(name, age);
    

     return 0;
}

void happyBirthday(std::string name, int age){


    std::cout<< "Happy Birthday to " << name <<"!\n";
    std::cout<< "Happy Birthday to " << name <<"!\n";
    std::cout<< "Happy Birthday to " << name <<"!\n";
    std::cout<< "Happy Birthday dear " << name <<"!\n";
    std::cout<< "Happy Birthday to juuuuuuuuuuu at "<< age << " " << name << "!\n";
}