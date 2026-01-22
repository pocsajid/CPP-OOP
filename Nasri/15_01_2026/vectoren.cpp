#include <iostream>
#include <vector>



int main(){

    std::vector<int> zahlen; // The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). A vector however, can grow or shrink in size as needed.

    zahlen.push_back(2);
    zahlen.push_back(-17);
    zahlen.push_back(23);


   // std::cout<<zahlen[0]<<'\n';



    for(int i = 0; i < zahlen.size(); i++){
        std::cout << zahlen[i] << '\n';
    }

    return 0;
    
}