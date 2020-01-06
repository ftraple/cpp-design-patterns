#include <iostream>

#include "Prototype.hpp"
#include "PrototypeFactory.hpp"
          
int main() {

    std::cout <<  "Prototype Pattern Test\n";
    std::cout <<  "----------------------------------------\n";
    Contact john{"John Doe", new Address{"123 East Dr", "London", 123}};
    Contact jane = john;
    jane.name = "Jane Smith";
    jane.address->suite = 103;
    std::cout << john << std::endl;
    std::cout << jane << std::endl;

    std::cout <<  "Factory Prototype Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    auto james = EmployeeFactory::newOfficeEmployee("James", 123);
    std::cout << james << std::endl;

    std::cout << '\n';
    return EXIT_SUCCESS;
}
