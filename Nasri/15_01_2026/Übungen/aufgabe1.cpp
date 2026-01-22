#include <iostream>
#include <vector>

int main(){

    std::vector<int> ganzzahlen;
  

    ganzzahlen.push_back(2);
    ganzzahlen.push_back(5);


    for(int i = 0; i < ganzzahlen.size(); i++){
        std::cout<<ganzzahlen[i]<<'\n';
    }




    return 0;
}