#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton {

public:
    static Singleton& getInstance() {
        /* Only one instance
           Guaranteed to be lazy initialized
           Guaranteed that it will be destroyed correctly */
        static Singleton instance;
        return instance;
    }

private:
    // Create a private constructor.
    Singleton() {};
    // Implement the destructor, if needed.
    //~Singleton() {};

    // Declare these two to tell to the compiler to avoid creating copies of this object.
    Singleton(Singleton const&);      // Do not implement.
    void operator=(Singleton const&); // Do not implement.

};

#endif _SINGLETON_H_