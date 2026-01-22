#include <iostream>

    class lampe{

        private:
        bool lampean;


        public:

        lampe(){
            lampean = false;
        }

        void turnOn(){
            if(lampean==false){
                lampean = true;
            }
           
        }

        void print(){
            if(lampean){
                std::cout<<"Deine Lampe ist an\n";
                }else{
                std::cout<<"Deine Lampe ist nicht an\n";
                }
        }






    };


int main(){

    lampe a;
    a.turnOn();
    a.print();





    return 0;
}