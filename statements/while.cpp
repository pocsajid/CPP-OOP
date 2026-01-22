#include

int main(){


    std::string name;

    while(name.empty()){

        //can run code infinitelly and while the term is true what we want it exits

        std::cout<< "Enter your name: ";
        std::getline(std::cin, name);

    }

    std::cout << "Hello" << name;


    return 0;
}