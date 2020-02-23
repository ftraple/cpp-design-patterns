#include <iostream>
#include "phone.hpp"

using namespace state_machine;

int main() {
    std::cout << "State Pattern Test\n";
    std::cout << "----------------------------------------\n";

    Phone phone;
    phone.Run();

    std::cout << '\n';
    return EXIT_SUCCESS;
}
