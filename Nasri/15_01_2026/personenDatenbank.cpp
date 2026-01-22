#include <iostream>



bool is_even(int number){
    int rest = number % 2;
    if(rest = 0){
        return true;
    }else{
        return false;
    }
    
}

int main(){
    int number = 17;

    

    bool ergebnis = is_even(number);

    if(ergebnis == false){
        std::cout << "Ungerade\n";
    } else{
        std::cout<< "Gerade\n";
    }


}