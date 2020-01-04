#include <iostream>

#include "Singleton.hpp"
#include "Multiton.hpp"
          
int main() {

    std::cout <<  "Singleton Pattern Test\n";
    std::cout <<  "----------------------------------------\n";
    //Singleton mp = Singleton::getInstance(); // Invalid
    Singleton::getInstance().log("This is a log message.");


    std::cout << '\n';
    std::cout <<  "Multiton Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    typedef Multiton<Printer, Importance> mt;
    auto main = mt::get(Importance::primary);
    auto aux = mt::get(Importance::secondary);
    auto aux2 = mt::get(Importance::secondary);

    std::cout << '\n';
    return EXIT_SUCCESS;
}
