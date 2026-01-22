#include <iostream>

class box {
private:
    int number;

public:
    box() {
        number = 6;
    }

    int show() {
        return number;
    }
};

int main() {
    box b;
    std::cout << b.show() << '\n';
}
