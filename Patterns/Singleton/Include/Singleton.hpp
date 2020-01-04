#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {

public:
    static Singleton& getInstance() {
        /* Only one instance
           Guaranteed to be lazy initialized
           Guaranteed that it will be destroyed correctly */
        static Singleton instance;
        return instance;
    }

    // Declare these two methods to tell to the compiler to avoid creating copies of this object.
    Singleton(Singleton const&) = delete;      // Do not implement.
    void operator=(Singleton const&) = delete; // Do not implement.

    void log(const std::string& text) const {
        std::cout << text << std::endl;
    }

private:
    // Create a private constructor.
    Singleton() {};
    // Implement the destructor, if needed.
    //~Singleton() {};


};

#endif // SINGLETON_H