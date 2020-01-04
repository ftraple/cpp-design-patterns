#ifndef MULTITON_HPP
# define MULTITON_HPP

#include <iostream>
#include <map>
#include <memory>

enum class Importance {
    primary,
    secondary,
    terceary
};

template <typename T, typename Key = std::string>
class Multiton {
    
    public:

    static std::shared_ptr<T> get(const Key& key) {
        // Check if the instance already exist
        if (const auto it = instances.find(key);
            it != instances.end()) {
            return it->second;
        }
        // Create a new instance and return it
        auto instance = std::make_shared<T>();
        instances[key] = instance;
        return instance;
    }

    protected:

    Multiton() = default;
    virtual ~Multiton() = default;

    private:

    static std::map<Key, std::shared_ptr<T>> instances;
};

template <typename T, typename Key>
std::map<Key, std::shared_ptr<T>> Multiton<T, Key>::instances;

class Printer
{
public:
  Printer()
  {
    ++Printer::totalInstanceCount;
    std::cout << "A total of " << Printer::totalInstanceCount << " instances created so far.\n";
  }
private:
  static int totalInstanceCount;
};
int Printer::totalInstanceCount = 0;

#endif // MULTITON_HPP