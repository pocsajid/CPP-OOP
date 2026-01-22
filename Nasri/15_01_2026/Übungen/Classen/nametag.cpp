#include <iostream>
#include <string>

class nameTag {
private:
    std::string name;

public:
    nameTag(const std::string& n) {
        name = n;
    }

    void print() const {
        std::cout << name << '\n';
    }
};

int main() {
    nameTag person("bob");
    person.print();
    return 0;
}

