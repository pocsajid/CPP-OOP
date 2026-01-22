#include <iostream>

int myNum = 3; 
void printNum();


int main(){
    //local variables == declared inside a function or block
    //global variables == declared outside of all functions

    
    int myNum = 4;
    printNum();
    std::cout<< myNum << "\n";


return 0;

}

void printNum(){

  
    std::cout << myNum << "\n";
}