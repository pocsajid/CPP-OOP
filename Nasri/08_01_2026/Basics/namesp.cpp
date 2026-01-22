#include <iostream>

namespace box1{
    int zahl = 5;
}
namespace box2{
    int zahl = 9;
}

int main(){

std::cout<<box1::zahl<<'\n';

    return 0;
}