#ifndef HOT_DRINK_FACTORY_HPP
#define HOT_DRINK_FACTORY_HPP

#include <memory>
#include <map>
#include <functional>

#include "HotDrink.hpp"

struct HotDrinkFactory {
    virtual std::unique_ptr<HotDrink> make() const = 0;
};

struct TeaFactory: HotDrinkFactory {
    std::unique_ptr<HotDrink> make() const override {
        return std::make_unique<Tea>();
    }
};

struct CoffeeFactory: HotDrinkFactory {
    std::unique_ptr<HotDrink> make() const override {
        return std::make_unique<Coffee>();
    }
};

//-----> Abstract Factory

class DrinkFactory {

    public:

    DrinkFactory() {
        m_hotFactories["coffee"] = std::make_unique<CoffeeFactory>();
        m_hotFactories["tea"] = std::make_unique<TeaFactory>();
    }

    std::unique_ptr<HotDrink> make_drink(const std::string& name, int volume) {
        auto drink = m_hotFactories[name]->make();
        drink->prepare(volume);
        return drink;
    }

    private:

    std::map<std::string, std::unique_ptr<HotDrinkFactory>> m_hotFactories;
};

//-----> Functional Factory


class FunctionalDrinkFactory {

    public:

    FunctionalDrinkFactory() {
        m_hotFactories["coffee"] = [] {
            auto coffee = std::make_unique<Coffee>();
            coffee->prepare(100);
            return coffee;
        };
        m_hotFactories["tea"] = [] {
            auto tea = std::make_unique<Tea>();
            tea->prepare(200);
            return tea;
        };
    }

    std::unique_ptr<HotDrink> make_drink(const std::string& name) {
        return m_hotFactories[name]();
    }

    private:

    std::map<std::string, std::function<std::unique_ptr<HotDrink>()>> m_hotFactories;
};



#endif //HOT_DRINK_FACTORY_HPP