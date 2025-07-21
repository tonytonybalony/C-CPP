#include <iostream>
#include <memory>

int main() {
    std::cout << "This is C++ example file 7" << std::endl;
    
    // Example: Smart pointers
    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    std::cout << "Value: " << *ptr << std::endl;
    
    std::shared_ptr<int> shared_ptr = std::make_shared<int>(100);
    std::cout << "Shared value: " << *shared_ptr << std::endl;
    
    return 0;
}