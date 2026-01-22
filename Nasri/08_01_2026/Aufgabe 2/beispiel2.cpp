#include <iostream>

int main(){

    int a;
    int b;
    
    
    std::cout<<"Geben Sie eine Zahl a ein: ";
    std::cin>>a;

    std::cout<<"Geben Sie eine Zahl a ein: ";
    std::cin>>b;

   if(a<b){
    std::cout<<"B ist größer als A: " << b <<"\n";
   }else if(b<a){
    std::cout<<"A ist größer als B: " << a <<"\n";
   }else{
    std::cout<<"Du hast keine Zahl eingegeben. \n";
   }


    





    return 0;
}