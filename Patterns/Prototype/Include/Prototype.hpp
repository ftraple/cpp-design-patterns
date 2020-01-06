#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>

struct Address {
    std::string street;
    std::string city;
    int suite;

    Address(const std::string& street, const std::string& city, int suite):
        street(street), city(city), suite(suite) {};

    Address(const Address& other):
        street(other.street), city(other.city), suite(other.suite) {}; 

    friend std::ostream& operator<<(std::ostream& os, const Address& address) {
        os << "street: " << address.street << " City: " << address.city << " Suite: " << address.suite;
        return os;
    }
};

struct Contact {
    std::string name;
    Address* address;

    Contact(const std::string& name, Address* address):
        name(name), address(address) {};

    ~Contact() {
        delete address;
    };

    Contact(const Contact& other):
        name(other.name), address(new Address{*other.address}) {};

    friend std::ostream& operator<<(std::ostream& os, const Contact& contact) {
        os << "Name: " << contact.name << " Address: " << *contact.address;
        return os;
    }
};

#endif // PROTOTYPE_H