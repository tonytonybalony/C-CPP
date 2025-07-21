#include <iostream>

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T>
class Container {
private:
    T value;
    
public:
    Container(T v) : value(v) {}
    T getValue() const { return value; }
};

int main() {
    std::cout << "This is C++ example file 9" << std::endl;
    
    // Example: Templates
    std::cout << "Int add: " << add<int>(5, 3) << std::endl;
    std::cout << "Double add: " << add<double>(2.5, 3.7) << std::endl;
    
    Container<int> intContainer(42);
    std::cout << "Container value: " << intContainer.getValue() << std::endl;
    
    return 0;
}