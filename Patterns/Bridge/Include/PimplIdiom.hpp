#ifndef PIMPL_IDIOM_HPP
#define PIMPL_IDIOM_HPP

#include <iostream>
#include <memory>

class PersonA {
    public:

    PersonA(const std::string& name);

    // To use a unique_ptr the compiler need to see destructor implemented in the cpp file
    ~PersonA();

    void greet();
    
    private:

    // Hide the person implementation 
    class PersonAImpl;
    std::unique_ptr<PersonAImpl> m_impl;
};



#endif // PIMPL_IDIOM_HPP