
#include "PimplIdiom.hpp"

class PersonA::PersonAImpl {

    public:

    PersonAImpl(const std::string& name);

    void greet();

    private:

    std::string m_name;
};

PersonA::PersonAImpl::PersonAImpl(const std::string& name): m_name(name) {};

void PersonA::PersonAImpl::greet() {
    std::cout << "Hello, my name is " << m_name << "." << std::endl;
}

PersonA::PersonA(const std::string& name):
    m_impl{std::make_unique<PersonAImpl>(name)} {}

PersonA::~PersonA() {}

void PersonA::greet() {
    m_impl->greet();
}
