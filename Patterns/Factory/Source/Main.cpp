#include <iostream>
#include <memory>

#include "FactoryMethod.hpp"
#include "ConcreteFactory.hpp"
#include "InnerFactory.hpp"
#include "HotDrinkFactory.hpp"

int main() {

    std::cout <<  "Factory Method Pattern Test\n";
    std::cout <<  "----------------------------------------\n";
    
    auto polarPointMethod = PointM::NewPolar(5, M_PI_4);
    std::cout << polarPointMethod << std::endl;
    
    auto cartesianPointMethod = PointM::NewCartesian(10, 20);
    std::cout << cartesianPointMethod << std::endl;

    std::cout <<  "\nConcrete Factory Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    auto polarPointConcrete = ConcreatePointCFactory::NewPolar(5, M_PI_4);
    std::cout << polarPointConcrete << std::endl;
    
    auto cartesianPointConcrete = ConcreatePointCFactory::NewCartesian(10, 20);
    std::cout << cartesianPointConcrete << std::endl;

    std::cout <<  "\nInner Factory Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    auto polarPointInner = PointI::Factory::NewPolar(5, M_PI_4);
    std::cout << polarPointInner << std::endl;
    
    auto cartesianPointInner = PointI::Factory::NewCartesian(10, 20);
    std::cout << cartesianPointInner << std::endl;

    std::cout <<  "\nAbstract Factory Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    DrinkFactory drinkFactory;
    auto coffee = drinkFactory.make_drink("coffee", 100);
    auto tea = drinkFactory.make_drink("tea", 200);

    std::cout <<  "\nFunctional Factory Pattern Test\n";
    std::cout <<  "----------------------------------------\n";

    FunctionalDrinkFactory functinalDrinkFactory;
    auto fCoffee = functinalDrinkFactory.make_drink("coffee");
    auto fTea = functinalDrinkFactory.make_drink("tea");

    std::cout << '\n';
    return EXIT_SUCCESS;
}
