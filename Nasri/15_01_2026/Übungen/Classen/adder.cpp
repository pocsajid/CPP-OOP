#include <iostream>

class Adder{

    private:

    int a;
    int b;


    public:

    Adder(int a, int b){
        this->a = a;
        this->b = b;
    }



    int sum(){

     return a+b;

    }







};






int main(){


    Adder x(3,4);
    std::cout<<x.sum();






    return 0;
}