#ifndef PROTOTYPE_FACTORY_HPP
#define PROTOTYPE_FACTORY_HPP

#include <memory>
#include <string>
#include "Prototype.hpp"

struct EmployeeFactory {
    
    static std::unique_ptr<Contact> newOfficeEmployee(const std::string name, int suite) {
        static Contact prototype{"", new Address{"123 East Dr", "London", 0}};
        return newEmployee(name, suite, prototype);
    }

    private:

    static std::unique_ptr<Contact> newEmployee(const std::string& name, int suite, const Contact& prototype) {
        auto employee = std::make_unique<Contact>(prototype);
        employee->name = name;
        employee->address->suite = suite;
        return employee;
    } 
};


#endif // PROTOTYPE_FACTORY_HPP