#include <iostream>
#include <map>
#include <string>

int main() {
    std::cout << "This is C++ example file 8" << std::endl;
    
    // Example: Map container
    std::map<std::string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;
    
    for (const auto& pair : ages) {
        std::cout << pair.first << " is " << pair.second << " years old" << std::endl;
    }
    
    return 0;
}