#include <iostream>

// fill is a range of elements with a specified value fill(beginn, end value)

int main(){



        const int SIZE = 99;
        std::string foods[SIZE];

            fill(foods, foods + (SIZE/3), "pizza");
            fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Hamburger");
            fill(foods + (SIZE/3)*2, foods + SIZE, "Hotdogs");

        for(std::string food : foods ){
            std::cout << food << '\n';
        }
        


    return 0;
}

