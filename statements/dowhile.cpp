#include <iostream>


// do while loop = do some block if code furst, 
// Then repeat again if contition is true

 int main(){


    int number;


    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
     
    }
    
        while(number < 0);
        std::cout<<"The # is: " << number;
    

 


    return 0;
 }